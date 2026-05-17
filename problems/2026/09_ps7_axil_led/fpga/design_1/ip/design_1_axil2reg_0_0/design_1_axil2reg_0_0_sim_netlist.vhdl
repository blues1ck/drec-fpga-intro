-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2025.1 (lin64) Build 6140274 Wed May 21 22:58:25 MDT 2025
-- Date        : Fri May 15 15:33:10 2026
-- Host        : ilya-B550-GAMING-X-V2 running 64-bit Ubuntu 22.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/fpga/design_1/ip/design_1_axil2reg_0_0/design_1_axil2reg_0_0_sim_netlist.vhdl
-- Design      : design_1_axil2reg_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg400-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_axil2reg_0_0_axil2reg_rd is
  port (
    s_axil_arready : out STD_LOGIC;
    reg_rd_en : out STD_LOGIC;
    s_axil_rvalid : out STD_LOGIC;
    s_axil_rdata : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_rresp : out STD_LOGIC_VECTOR ( 0 to 0 );
    clk : in STD_LOGIC;
    idle_reg_0 : in STD_LOGIC;
    reg_rd_okay : in STD_LOGIC;
    reg_rd_data : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_arvalid : in STD_LOGIC;
    s_axil_rready : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_axil2reg_0_0_axil2reg_rd : entity is "axil2reg_rd";
end design_1_axil2reg_0_0_axil2reg_rd;

architecture STRUCTURE of design_1_axil2reg_0_0_axil2reg_rd is
  signal data : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal en_d : STD_LOGIC;
  signal idle_i_1_n_0 : STD_LOGIC;
  signal okay_reg_n_0 : STD_LOGIC;
  signal \^reg_rd_en\ : STD_LOGIC;
  signal \^s_axil_arready\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of idle_i_1 : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of reg_rd_en_INST_0 : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \s_axil_rdata[0]_INST_0\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \s_axil_rdata[10]_INST_0\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \s_axil_rdata[11]_INST_0\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \s_axil_rdata[12]_INST_0\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \s_axil_rdata[13]_INST_0\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \s_axil_rdata[14]_INST_0\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \s_axil_rdata[15]_INST_0\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \s_axil_rdata[16]_INST_0\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \s_axil_rdata[17]_INST_0\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \s_axil_rdata[18]_INST_0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \s_axil_rdata[19]_INST_0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \s_axil_rdata[1]_INST_0\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \s_axil_rdata[20]_INST_0\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \s_axil_rdata[21]_INST_0\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \s_axil_rdata[22]_INST_0\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \s_axil_rdata[23]_INST_0\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \s_axil_rdata[24]_INST_0\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \s_axil_rdata[25]_INST_0\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \s_axil_rdata[26]_INST_0\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \s_axil_rdata[27]_INST_0\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \s_axil_rdata[28]_INST_0\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \s_axil_rdata[29]_INST_0\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \s_axil_rdata[2]_INST_0\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \s_axil_rdata[30]_INST_0\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \s_axil_rdata[31]_INST_0\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \s_axil_rdata[3]_INST_0\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \s_axil_rdata[4]_INST_0\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \s_axil_rdata[5]_INST_0\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \s_axil_rdata[6]_INST_0\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \s_axil_rdata[7]_INST_0\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \s_axil_rdata[8]_INST_0\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \s_axil_rdata[9]_INST_0\ : label is "soft_lutpair5";
begin
  reg_rd_en <= \^reg_rd_en\;
  s_axil_arready <= \^s_axil_arready\;
\data_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(0),
      Q => data(0),
      R => '0'
    );
\data_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(10),
      Q => data(10),
      R => '0'
    );
\data_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(11),
      Q => data(11),
      R => '0'
    );
\data_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(12),
      Q => data(12),
      R => '0'
    );
\data_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(13),
      Q => data(13),
      R => '0'
    );
\data_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(14),
      Q => data(14),
      R => '0'
    );
\data_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(15),
      Q => data(15),
      R => '0'
    );
\data_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(16),
      Q => data(16),
      R => '0'
    );
\data_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(17),
      Q => data(17),
      R => '0'
    );
\data_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(18),
      Q => data(18),
      R => '0'
    );
\data_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(19),
      Q => data(19),
      R => '0'
    );
\data_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(1),
      Q => data(1),
      R => '0'
    );
\data_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(20),
      Q => data(20),
      R => '0'
    );
\data_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(21),
      Q => data(21),
      R => '0'
    );
\data_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(22),
      Q => data(22),
      R => '0'
    );
\data_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(23),
      Q => data(23),
      R => '0'
    );
\data_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(24),
      Q => data(24),
      R => '0'
    );
\data_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(25),
      Q => data(25),
      R => '0'
    );
\data_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(26),
      Q => data(26),
      R => '0'
    );
\data_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(27),
      Q => data(27),
      R => '0'
    );
\data_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(28),
      Q => data(28),
      R => '0'
    );
\data_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(29),
      Q => data(29),
      R => '0'
    );
\data_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(2),
      Q => data(2),
      R => '0'
    );
\data_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(30),
      Q => data(30),
      R => '0'
    );
\data_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(31),
      Q => data(31),
      R => '0'
    );
\data_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(3),
      Q => data(3),
      R => '0'
    );
\data_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(4),
      Q => data(4),
      R => '0'
    );
\data_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(5),
      Q => data(5),
      R => '0'
    );
\data_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(6),
      Q => data(6),
      R => '0'
    );
\data_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(7),
      Q => data(7),
      R => '0'
    );
\data_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(8),
      Q => data(8),
      R => '0'
    );
\data_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_data(9),
      Q => data(9),
      R => '0'
    );
en_d_reg: unisim.vcomponents.FDCE
     port map (
      C => clk,
      CE => '1',
      CLR => idle_reg_0,
      D => \^reg_rd_en\,
      Q => en_d
    );
idle_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => s_axil_arvalid,
      I1 => \^s_axil_arready\,
      I2 => s_axil_rready,
      O => idle_i_1_n_0
    );
idle_reg: unisim.vcomponents.FDPE
     port map (
      C => clk,
      CE => '1',
      D => idle_i_1_n_0,
      PRE => idle_reg_0,
      Q => \^s_axil_arready\
    );
okay_reg: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => en_d,
      D => reg_rd_okay,
      Q => okay_reg_n_0,
      R => '0'
    );
reg_rd_en_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \^s_axil_arready\,
      I1 => s_axil_arvalid,
      O => \^reg_rd_en\
    );
\s_axil_rdata[0]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(0),
      I1 => data(0),
      I2 => en_d,
      O => s_axil_rdata(0)
    );
\s_axil_rdata[10]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(10),
      I1 => data(10),
      I2 => en_d,
      O => s_axil_rdata(10)
    );
\s_axil_rdata[11]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(11),
      I1 => data(11),
      I2 => en_d,
      O => s_axil_rdata(11)
    );
\s_axil_rdata[12]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(12),
      I1 => data(12),
      I2 => en_d,
      O => s_axil_rdata(12)
    );
\s_axil_rdata[13]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(13),
      I1 => data(13),
      I2 => en_d,
      O => s_axil_rdata(13)
    );
\s_axil_rdata[14]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(14),
      I1 => data(14),
      I2 => en_d,
      O => s_axil_rdata(14)
    );
\s_axil_rdata[15]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(15),
      I1 => data(15),
      I2 => en_d,
      O => s_axil_rdata(15)
    );
\s_axil_rdata[16]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(16),
      I1 => data(16),
      I2 => en_d,
      O => s_axil_rdata(16)
    );
\s_axil_rdata[17]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(17),
      I1 => data(17),
      I2 => en_d,
      O => s_axil_rdata(17)
    );
\s_axil_rdata[18]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(18),
      I1 => data(18),
      I2 => en_d,
      O => s_axil_rdata(18)
    );
\s_axil_rdata[19]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(19),
      I1 => data(19),
      I2 => en_d,
      O => s_axil_rdata(19)
    );
\s_axil_rdata[1]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(1),
      I1 => data(1),
      I2 => en_d,
      O => s_axil_rdata(1)
    );
\s_axil_rdata[20]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(20),
      I1 => data(20),
      I2 => en_d,
      O => s_axil_rdata(20)
    );
\s_axil_rdata[21]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(21),
      I1 => data(21),
      I2 => en_d,
      O => s_axil_rdata(21)
    );
\s_axil_rdata[22]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(22),
      I1 => data(22),
      I2 => en_d,
      O => s_axil_rdata(22)
    );
\s_axil_rdata[23]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(23),
      I1 => data(23),
      I2 => en_d,
      O => s_axil_rdata(23)
    );
\s_axil_rdata[24]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(24),
      I1 => data(24),
      I2 => en_d,
      O => s_axil_rdata(24)
    );
\s_axil_rdata[25]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(25),
      I1 => data(25),
      I2 => en_d,
      O => s_axil_rdata(25)
    );
\s_axil_rdata[26]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(26),
      I1 => data(26),
      I2 => en_d,
      O => s_axil_rdata(26)
    );
\s_axil_rdata[27]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(27),
      I1 => data(27),
      I2 => en_d,
      O => s_axil_rdata(27)
    );
\s_axil_rdata[28]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(28),
      I1 => data(28),
      I2 => en_d,
      O => s_axil_rdata(28)
    );
\s_axil_rdata[29]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(29),
      I1 => data(29),
      I2 => en_d,
      O => s_axil_rdata(29)
    );
\s_axil_rdata[2]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(2),
      I1 => data(2),
      I2 => en_d,
      O => s_axil_rdata(2)
    );
\s_axil_rdata[30]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(30),
      I1 => data(30),
      I2 => en_d,
      O => s_axil_rdata(30)
    );
\s_axil_rdata[31]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(31),
      I1 => data(31),
      I2 => en_d,
      O => s_axil_rdata(31)
    );
\s_axil_rdata[3]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(3),
      I1 => data(3),
      I2 => en_d,
      O => s_axil_rdata(3)
    );
\s_axil_rdata[4]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(4),
      I1 => data(4),
      I2 => en_d,
      O => s_axil_rdata(4)
    );
\s_axil_rdata[5]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(5),
      I1 => data(5),
      I2 => en_d,
      O => s_axil_rdata(5)
    );
\s_axil_rdata[6]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(6),
      I1 => data(6),
      I2 => en_d,
      O => s_axil_rdata(6)
    );
\s_axil_rdata[7]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(7),
      I1 => data(7),
      I2 => en_d,
      O => s_axil_rdata(7)
    );
\s_axil_rdata[8]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(8),
      I1 => data(8),
      I2 => en_d,
      O => s_axil_rdata(8)
    );
\s_axil_rdata[9]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => reg_rd_data(9),
      I1 => data(9),
      I2 => en_d,
      O => s_axil_rdata(9)
    );
\s_axil_rresp[1]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"1D"
    )
        port map (
      I0 => okay_reg_n_0,
      I1 => en_d,
      I2 => reg_rd_okay,
      O => s_axil_rresp(0)
    );
s_axil_rvalid_INST_0: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^s_axil_arready\,
      O => s_axil_rvalid
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_axil2reg_0_0_axil2reg_wr is
  port (
    rst_n_0 : out STD_LOGIC;
    reg_wr_en : out STD_LOGIC;
    s_axil_awready : out STD_LOGIC;
    s_axil_wready : out STD_LOGIC;
    s_axil_bvalid : out STD_LOGIC;
    s_axil_bresp : out STD_LOGIC_VECTOR ( 0 to 0 );
    clk : in STD_LOGIC;
    rst_n : in STD_LOGIC;
    s_axil_awvalid : in STD_LOGIC;
    s_axil_wvalid : in STD_LOGIC;
    s_axil_bready : in STD_LOGIC;
    reg_wr_okay : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_axil2reg_0_0_axil2reg_wr : entity is "axil2reg_wr";
end design_1_axil2reg_0_0_axil2reg_wr;

architecture STRUCTURE of design_1_axil2reg_0_0_axil2reg_wr is
  signal en_d : STD_LOGIC;
  signal idle : STD_LOGIC;
  signal \idle_i_1__0_n_0\ : STD_LOGIC;
  signal okay : STD_LOGIC;
  signal okay_reg_n_0 : STD_LOGIC;
  signal \^reg_wr_en\ : STD_LOGIC;
  signal \^rst_n_0\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \idle_i_1__0\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of okay_i_1 : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of reg_wr_en_INST_0 : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of s_axil_awready_INST_0 : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \s_axil_bresp[1]_INST_0\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of s_axil_wready_INST_0 : label is "soft_lutpair19";
begin
  reg_wr_en <= \^reg_wr_en\;
  rst_n_0 <= \^rst_n_0\;
en_d_reg: unisim.vcomponents.FDCE
     port map (
      C => clk,
      CE => '1',
      CLR => \^rst_n_0\,
      D => \^reg_wr_en\,
      Q => en_d
    );
\idle_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F70"
    )
        port map (
      I0 => s_axil_awvalid,
      I1 => s_axil_wvalid,
      I2 => idle,
      I3 => s_axil_bready,
      O => \idle_i_1__0_n_0\
    );
idle_i_2: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => rst_n,
      O => \^rst_n_0\
    );
idle_reg: unisim.vcomponents.FDPE
     port map (
      C => clk,
      CE => '1',
      D => \idle_i_1__0_n_0\,
      PRE => \^rst_n_0\,
      Q => idle
    );
okay_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => reg_wr_okay,
      I1 => en_d,
      I2 => okay_reg_n_0,
      O => okay
    );
okay_reg: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => okay,
      Q => okay_reg_n_0,
      R => '0'
    );
reg_wr_en_INST_0: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => s_axil_awvalid,
      I1 => idle,
      I2 => s_axil_wvalid,
      O => \^reg_wr_en\
    );
s_axil_awready_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => idle,
      I1 => s_axil_wvalid,
      O => s_axil_awready
    );
\s_axil_bresp[1]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"1D"
    )
        port map (
      I0 => okay_reg_n_0,
      I1 => en_d,
      I2 => reg_wr_okay,
      O => s_axil_bresp(0)
    );
s_axil_bvalid_INST_0: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => idle,
      O => s_axil_bvalid
    );
s_axil_wready_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => idle,
      I1 => s_axil_awvalid,
      O => s_axil_wready
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_axil2reg_0_0_axil2reg is
  port (
    s_axil_arready : out STD_LOGIC;
    reg_rd_en : out STD_LOGIC;
    reg_wr_en : out STD_LOGIC;
    s_axil_rvalid : out STD_LOGIC;
    s_axil_rdata : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_rresp : out STD_LOGIC_VECTOR ( 0 to 0 );
    s_axil_awready : out STD_LOGIC;
    s_axil_wready : out STD_LOGIC;
    s_axil_bvalid : out STD_LOGIC;
    s_axil_bresp : out STD_LOGIC_VECTOR ( 0 to 0 );
    clk : in STD_LOGIC;
    reg_rd_data : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_arvalid : in STD_LOGIC;
    s_axil_rready : in STD_LOGIC;
    reg_rd_okay : in STD_LOGIC;
    s_axil_awvalid : in STD_LOGIC;
    s_axil_wvalid : in STD_LOGIC;
    s_axil_bready : in STD_LOGIC;
    reg_wr_okay : in STD_LOGIC;
    rst_n : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_axil2reg_0_0_axil2reg : entity is "axil2reg";
end design_1_axil2reg_0_0_axil2reg;

architecture STRUCTURE of design_1_axil2reg_0_0_axil2reg is
  signal wr_n_0 : STD_LOGIC;
begin
rd: entity work.design_1_axil2reg_0_0_axil2reg_rd
     port map (
      clk => clk,
      idle_reg_0 => wr_n_0,
      reg_rd_data(31 downto 0) => reg_rd_data(31 downto 0),
      reg_rd_en => reg_rd_en,
      reg_rd_okay => reg_rd_okay,
      s_axil_arready => s_axil_arready,
      s_axil_arvalid => s_axil_arvalid,
      s_axil_rdata(31 downto 0) => s_axil_rdata(31 downto 0),
      s_axil_rready => s_axil_rready,
      s_axil_rresp(0) => s_axil_rresp(0),
      s_axil_rvalid => s_axil_rvalid
    );
wr: entity work.design_1_axil2reg_0_0_axil2reg_wr
     port map (
      clk => clk,
      reg_wr_en => reg_wr_en,
      reg_wr_okay => reg_wr_okay,
      rst_n => rst_n,
      rst_n_0 => wr_n_0,
      s_axil_awready => s_axil_awready,
      s_axil_awvalid => s_axil_awvalid,
      s_axil_bready => s_axil_bready,
      s_axil_bresp(0) => s_axil_bresp(0),
      s_axil_bvalid => s_axil_bvalid,
      s_axil_wready => s_axil_wready,
      s_axil_wvalid => s_axil_wvalid
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_axil2reg_0_0 is
  port (
    clk : in STD_LOGIC;
    rst_n : in STD_LOGIC;
    s_axil_araddr : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_arprot : in STD_LOGIC_VECTOR ( 2 downto 0 );
    s_axil_arvalid : in STD_LOGIC;
    s_axil_arready : out STD_LOGIC;
    s_axil_rdata : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_rresp : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axil_rvalid : out STD_LOGIC;
    s_axil_rready : in STD_LOGIC;
    s_axil_awaddr : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_awprot : in STD_LOGIC_VECTOR ( 2 downto 0 );
    s_axil_awvalid : in STD_LOGIC;
    s_axil_awready : out STD_LOGIC;
    s_axil_wdata : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axil_wstrb : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axil_wvalid : in STD_LOGIC;
    s_axil_wready : out STD_LOGIC;
    s_axil_bresp : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axil_bvalid : out STD_LOGIC;
    s_axil_bready : in STD_LOGIC;
    reg_rd_addr : out STD_LOGIC_VECTOR ( 31 downto 0 );
    reg_rd_en : out STD_LOGIC;
    reg_rd_data : in STD_LOGIC_VECTOR ( 31 downto 0 );
    reg_rd_okay : in STD_LOGIC;
    reg_wr_addr : out STD_LOGIC_VECTOR ( 31 downto 0 );
    reg_wr_data : out STD_LOGIC_VECTOR ( 31 downto 0 );
    reg_wr_strb : out STD_LOGIC_VECTOR ( 3 downto 0 );
    reg_wr_en : out STD_LOGIC;
    reg_wr_okay : in STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of design_1_axil2reg_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of design_1_axil2reg_0_0 : entity is "design_1_axil2reg_0_0,axil2reg,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of design_1_axil2reg_0_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of design_1_axil2reg_0_0 : entity is "module_ref";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of design_1_axil2reg_0_0 : entity is "axil2reg,Vivado 2025.1";
end design_1_axil2reg_0_0;

architecture STRUCTURE of design_1_axil2reg_0_0 is
  signal \<const0>\ : STD_LOGIC;
  signal \^s_axil_araddr\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^s_axil_awaddr\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^s_axil_bresp\ : STD_LOGIC_VECTOR ( 1 to 1 );
  signal \^s_axil_rresp\ : STD_LOGIC_VECTOR ( 1 to 1 );
  signal \^s_axil_wdata\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^s_axil_wstrb\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of clk : signal is "xilinx.com:signal:clock:1.0 clk CLK";
  attribute X_INTERFACE_MODE : string;
  attribute X_INTERFACE_MODE of clk : signal is "slave";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of clk : signal is "XIL_INTERFACENAME clk, ASSOCIATED_BUSIF s_axil, FREQ_HZ 50000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of rst_n : signal is "xilinx.com:signal:reset:1.0 rst_n RST";
  attribute X_INTERFACE_MODE of rst_n : signal is "slave";
  attribute X_INTERFACE_PARAMETER of rst_n : signal is "XIL_INTERFACENAME rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axil_arready : signal is "xilinx.com:interface:aximm:1.0 s_axil ARREADY";
  attribute X_INTERFACE_INFO of s_axil_arvalid : signal is "xilinx.com:interface:aximm:1.0 s_axil ARVALID";
  attribute X_INTERFACE_INFO of s_axil_awready : signal is "xilinx.com:interface:aximm:1.0 s_axil AWREADY";
  attribute X_INTERFACE_INFO of s_axil_awvalid : signal is "xilinx.com:interface:aximm:1.0 s_axil AWVALID";
  attribute X_INTERFACE_INFO of s_axil_bready : signal is "xilinx.com:interface:aximm:1.0 s_axil BREADY";
  attribute X_INTERFACE_INFO of s_axil_bvalid : signal is "xilinx.com:interface:aximm:1.0 s_axil BVALID";
  attribute X_INTERFACE_INFO of s_axil_rready : signal is "xilinx.com:interface:aximm:1.0 s_axil RREADY";
  attribute X_INTERFACE_INFO of s_axil_rvalid : signal is "xilinx.com:interface:aximm:1.0 s_axil RVALID";
  attribute X_INTERFACE_INFO of s_axil_wready : signal is "xilinx.com:interface:aximm:1.0 s_axil WREADY";
  attribute X_INTERFACE_INFO of s_axil_wvalid : signal is "xilinx.com:interface:aximm:1.0 s_axil WVALID";
  attribute X_INTERFACE_INFO of s_axil_araddr : signal is "xilinx.com:interface:aximm:1.0 s_axil ARADDR";
  attribute X_INTERFACE_MODE of s_axil_araddr : signal is "slave";
  attribute X_INTERFACE_PARAMETER of s_axil_araddr : signal is "XIL_INTERFACENAME s_axil, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 50000000, ID_WIDTH 0, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 1, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 4, NUM_WRITE_THREADS 4, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axil_arprot : signal is "xilinx.com:interface:aximm:1.0 s_axil ARPROT";
  attribute X_INTERFACE_INFO of s_axil_awaddr : signal is "xilinx.com:interface:aximm:1.0 s_axil AWADDR";
  attribute X_INTERFACE_INFO of s_axil_awprot : signal is "xilinx.com:interface:aximm:1.0 s_axil AWPROT";
  attribute X_INTERFACE_INFO of s_axil_bresp : signal is "xilinx.com:interface:aximm:1.0 s_axil BRESP";
  attribute X_INTERFACE_INFO of s_axil_rdata : signal is "xilinx.com:interface:aximm:1.0 s_axil RDATA";
  attribute X_INTERFACE_INFO of s_axil_rresp : signal is "xilinx.com:interface:aximm:1.0 s_axil RRESP";
  attribute X_INTERFACE_INFO of s_axil_wdata : signal is "xilinx.com:interface:aximm:1.0 s_axil WDATA";
  attribute X_INTERFACE_INFO of s_axil_wstrb : signal is "xilinx.com:interface:aximm:1.0 s_axil WSTRB";
begin
  \^s_axil_araddr\(31 downto 0) <= s_axil_araddr(31 downto 0);
  \^s_axil_awaddr\(31 downto 0) <= s_axil_awaddr(31 downto 0);
  \^s_axil_wdata\(31 downto 0) <= s_axil_wdata(31 downto 0);
  \^s_axil_wstrb\(3 downto 0) <= s_axil_wstrb(3 downto 0);
  reg_rd_addr(31 downto 0) <= \^s_axil_araddr\(31 downto 0);
  reg_wr_addr(31 downto 0) <= \^s_axil_awaddr\(31 downto 0);
  reg_wr_data(31 downto 0) <= \^s_axil_wdata\(31 downto 0);
  reg_wr_strb(3 downto 0) <= \^s_axil_wstrb\(3 downto 0);
  s_axil_bresp(1) <= \^s_axil_bresp\(1);
  s_axil_bresp(0) <= \<const0>\;
  s_axil_rresp(1) <= \^s_axil_rresp\(1);
  s_axil_rresp(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
inst: entity work.design_1_axil2reg_0_0_axil2reg
     port map (
      clk => clk,
      reg_rd_data(31 downto 0) => reg_rd_data(31 downto 0),
      reg_rd_en => reg_rd_en,
      reg_rd_okay => reg_rd_okay,
      reg_wr_en => reg_wr_en,
      reg_wr_okay => reg_wr_okay,
      rst_n => rst_n,
      s_axil_arready => s_axil_arready,
      s_axil_arvalid => s_axil_arvalid,
      s_axil_awready => s_axil_awready,
      s_axil_awvalid => s_axil_awvalid,
      s_axil_bready => s_axil_bready,
      s_axil_bresp(0) => \^s_axil_bresp\(1),
      s_axil_bvalid => s_axil_bvalid,
      s_axil_rdata(31 downto 0) => s_axil_rdata(31 downto 0),
      s_axil_rready => s_axil_rready,
      s_axil_rresp(0) => \^s_axil_rresp\(1),
      s_axil_rvalid => s_axil_rvalid,
      s_axil_wready => s_axil_wready,
      s_axil_wvalid => s_axil_wvalid
    );
end STRUCTURE;
