#!/bin/bash
# Setup script for 07_linux_muldev project
# Installs cross-compiler and downloads pre-built kernel

set -e

echo "=== Setup for Linux mul-dev project ==="
echo ""

# Check if running on macOS
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo "Detected macOS"
    
    # Check for Homebrew
    if ! command -v brew &> /dev/null; then
        echo "Error: Homebrew not found. Install from https://brew.sh"
        exit 1
    fi
    
    # Install ARM cross-compiler
    echo ""
    echo "Installing ARM Linux cross-compiler..."
    brew tap messense/macos-cross-toolchains 2>/dev/null || true
    brew install arm-unknown-linux-gnueabihf 2>/dev/null || \
        brew install arm-linux-gnueabihf-binutils 2>/dev/null || \
        echo "Warning: Could not install cross-compiler via brew"
    
    # Alternative: use Docker
    echo ""
    echo "Alternative: You can use Docker for cross-compilation:"
    echo "  docker run --rm -v \$(pwd):/work -w /work arm32v7/gcc gcc -static -o mul_test mul_test.c"
    
else
    echo "Detected Linux"
    echo ""
    echo "Installing ARM cross-compiler..."
    sudo apt update
    sudo apt install -y gcc-arm-linux-gnueabihf
fi

echo ""
echo "=== Downloading pre-built kernel and rootfs ==="

BUILD_DIR="build"
mkdir -p $BUILD_DIR

# Download pre-built ARM kernel
KERNEL_URL="https://github.com/nickhutchinson/arm-linux-binaries/raw/main/zImage"
if [ ! -f "$BUILD_DIR/zImage" ]; then
    echo "Downloading pre-built ARM kernel..."
    curl -L -o "$BUILD_DIR/zImage" "$KERNEL_URL" 2>/dev/null || \
    wget -O "$BUILD_DIR/zImage" "$KERNEL_URL" 2>/dev/null || \
    echo "Could not download kernel. Will need to build manually."
fi

# Download pre-built BusyBox
BUSYBOX_URL="https://busybox.net/downloads/binaries/1.35.0-arm-linux-musleabi/busybox"
if [ ! -f "$BUILD_DIR/busybox" ]; then
    echo "Downloading pre-built BusyBox (static)..."
    curl -L -o "$BUILD_DIR/busybox" "$BUSYBOX_URL" 2>/dev/null || \
    wget -O "$BUILD_DIR/busybox" "$BUSYBOX_URL" 2>/dev/null || \
    echo "Could not download busybox."
    chmod +x "$BUILD_DIR/busybox" 2>/dev/null || true
fi

echo ""
echo "=== Setup complete ==="
echo ""
echo "Next steps:"
echo "1. If cross-compiler installed: make initramfs"
echo "2. If using pre-built kernel: make KERNEL=build/zImage run"
echo "3. Or use Docker for cross-compilation"
echo ""

