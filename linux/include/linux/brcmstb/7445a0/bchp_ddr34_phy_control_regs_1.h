/***************************************************************************
 *     Copyright (c) 1999-2012, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jun 29 03:07:31 2012
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008005
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_DDR34_PHY_CONTROL_REGS_1_H__
#define BCHP_DDR34_PHY_CONTROL_REGS_1_H__

/***************************************************************************
 *DDR34_PHY_CONTROL_REGS_1 - DDR34 DDR34 physical interface control registers 1
 ***************************************************************************/
#define BCHP_DDR34_PHY_CONTROL_REGS_1_REVISION   0x003c6000 /* Address & Control revision register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_STATUS 0x003c6004 /* PHY PLL status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_CONFIG 0x003c6008 /* PHY PLL configuration register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_CONTROL1 0x003c600c /* PHY PLL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_CONTROL2 0x003c6010 /* PHY PLL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_CONTROL3 0x003c6014 /* PHY PLL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_DIVIDERS 0x003c6018 /* PHY PLL integer divider register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_FRAC_DIVIDER 0x003c601c /* PHY PLL fractional divider register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_SS_CONTROL 0x003c6020 /* PHY PLL spread spectrum control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PLL_SS_LIMIT 0x003c6024 /* PHY PLL spread spectrum limit register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_AUX_CONTROL 0x003c6028 /* Aux Control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_IDLE_PAD_CONTROL 0x003c602c /* Idle mode SSTL pad control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DRIVE_PAD_CTL 0x003c6030 /* PVT Compensation control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_STATIC_PAD_CTL 0x003c6034 /* pad rx and tx characteristics control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DRAM_CONFIG 0x003c6038 /* DRAM configuration register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DRAM_TIMING1 0x003c603c /* DRAM timing register #1 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DRAM_TIMING2 0x003c6040 /* DRAM timing register #2 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DRAM_TIMING3 0x003c6044 /* DRAM timing register #3 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DRAM_TIMING4 0x003c6048 /* DRAM timing register #4 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CALIBRATE 0x003c6060 /* PHY VDL calibration control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CALIB_STATUS1 0x003c6064 /* PHY VDL calibration status register #1 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CALIB_STATUS2 0x003c6068 /* PHY VDL calibration status register #2 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_CONTROL 0x003c606c /* PHY VDL delay monitoring control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_REF 0x003c6070 /* PHY VDL delay monitoring reference register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_STATUS 0x003c6074 /* PHY VDL delay monitoring status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_OVERRIDE 0x003c6078 /* PHY VDL delay monitoring override register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_OUT_CONTROL 0x003c607c /* PHY VDL delay monitoring output control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_OUT_STATUS 0x003c6080 /* PHY VDL delay monitoring output status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_MONITOR_OUT_STATUS_CLEAR 0x003c6084 /* PHY VDL delay monitoring output status clear register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD00 0x003c6090 /* DDR interface signal AD[00] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD01 0x003c6094 /* DDR interface signal AD[01] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD02 0x003c6098 /* DDR interface signal AD[02] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD03 0x003c609c /* DDR interface signal AD[03] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD04 0x003c60a0 /* DDR interface signal AD[04] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD05 0x003c60a4 /* DDR interface signal AD[05] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD06 0x003c60a8 /* DDR interface signal AD[06] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD07 0x003c60ac /* DDR interface signal AD[07] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD08 0x003c60b0 /* DDR interface signal AD[08] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD09 0x003c60b4 /* DDR interface signal AD[09] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD10 0x003c60b8 /* DDR interface signal AD[10] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD11 0x003c60bc /* DDR interface signal AD[11] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD12 0x003c60c0 /* DDR interface signal AD[12] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD13 0x003c60c4 /* DDR interface signal AD[13] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD14 0x003c60c8 /* DDR interface signal AD[14] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AD15 0x003c60cc /* DDR interface signal AD[15] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_BA0 0x003c60d0 /* DDR interface signal BA[0] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_BA1 0x003c60d4 /* DDR interface signal BA[1] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_BA2 0x003c60d8 /* DDR interface signal BA[2] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AUX0 0x003c60dc /* DDR interface signal AUX[0] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AUX1 0x003c60e0 /* DDR interface signal AUX[1] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_AUX2 0x003c60e4 /* DDR interface signal AUX[2] VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_CS0 0x003c60e8 /* DDR interface signal CS0 VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_CS1 0x003c60ec /* DDR interface signal CS1 VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_PAR 0x003c60f0 /* DDR interface signal PAR VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_RAS_N 0x003c60f4 /* DDR interface signal RAS_N VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_CAS_N 0x003c60f8 /* DDR interface signal CAS_N VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_CKE 0x003c60fc /* DDR interface signal CKE0 VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_RST_N 0x003c6100 /* DDR interface signal RST_N VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_ODT 0x003c6104 /* DDR interface signal ODT0 VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_WE_N 0x003c6108 /* DDR interface signal WE_N VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_DDR_CK_P 0x003c610c /* DDR interface signal DDR_CK-P VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CONTROL_DDR_CK_N 0x003c6110 /* DDR interface signal DDR_CK-N VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VDL_CLK_CONTROL 0x003c6114 /* DDR interface signal CLK VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_REFRESH    0x003c6130 /* Refresh engine controller */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_UPDATE_VDL 0x003c6134 /* Update VDL control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_UPDATE_VDL_SNOOP1 0x003c6138 /* Update VDL snoop control register #1 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_UPDATE_VDL_SNOOP2 0x003c613c /* Update VDL snoop control register #2 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_COMMAND_REG1 0x003c6140 /* DRAM Command Register #1 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_COMMAND_REG2 0x003c6144 /* DRAM Command Register #2 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_COMMAND_REG3 0x003c6148 /* DRAM Command Register #3 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_COMMAND_REG4 0x003c614c /* DRAM Command Register #4 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_COMMAND_REG_TIMER 0x003c6150 /* DRAM Command Timer Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG0  0x003c6154 /* DDR3/DDR4/GDDR5M Mode Register 0 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG1  0x003c6158 /* DDR3/DDR4/GDDR5M Mode Register 1 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG2  0x003c615c /* DDR3/DDR4/GDDR5M Mode Register 2 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG3  0x003c6160 /* DDR3/DDR4/GDDR5M Mode Register 3 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG4  0x003c6164 /* DDR4/GDDR5M Mode Register 4 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG5  0x003c6168 /* DDR4/GDDR5M Mode Register 5 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG6  0x003c616c /* DDR4/GDDR5M Mode Register 6 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG7  0x003c6170 /* DDR4/GDDR5M Mode Register 7 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_MODE_REG15 0x003c6174 /* GDDR5M Mode Register 15 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_ALERT_CLEAR 0x003c6180 /* DDR4 Alert status clear register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_ALERT_STATUS 0x003c6184 /* DDR4 Alert status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_CA_PARITY  0x003c6188 /* DDR4 CA parity control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_CA_PLAYBACK_CONTROL 0x003c618c /* GDDR5M CA playback control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_CA_PLAYBACK_STATUS 0x003c6190 /* GDDR5M CA playback status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_WRITE_LEVELING_CONTROL 0x003c6194 /* Write leveling control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_WRITE_LEVELING_STATUS 0x003c6198 /* Write leveling status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_READ_ENABLE_CONTROL 0x003c619c /* Read enable test cycle control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_READ_ENABLE_STATUS 0x003c61a0 /* Read enable test cycle status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_LFSR_SEED 0x003c61b0 /* Traffic generator seed register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_ADDRESS1 0x003c61b4 /* Traffic generator address register #1 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_ADDRESS2 0x003c61b8 /* Traffic generator address register #2 */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_CONTROL 0x003c61bc /* Traffic generator control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_DATA_CONTROL 0x003c61c0 /* Traffic generator data control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_DQ_MASK 0x003c61c4 /* Traffic generator DQ mask register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_ECC_DQ_MASK 0x003c61c8 /* Traffic generator ECC DQ mask register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_STATUS 0x003c61cc /* Traffic generator status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_DQ_STATUS 0x003c61d0 /* Traffic generator DQ status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_ECC_STATUS 0x003c61d4 /* Traffic generator ECC DQ status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_ERR_CNT_CONTROL 0x003c61d8 /* Traffic generator error count control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_TRAFFIC_GEN_ERR_CNT_STATUS 0x003c61dc /* Traffic generator error count status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VIRTUAL_VTT_CONTROL 0x003c61f0 /* Virtual VTT Control and Status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VIRTUAL_VTT_STATUS 0x003c61f4 /* Virtual VTT Control and Status register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VIRTUAL_VTT_CONNECTIONS 0x003c61f8 /* Virtual VTT Connections register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VIRTUAL_VTT_OVERRIDE 0x003c61fc /* Virtual VTT Override register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_VREF_DAC_CONTROL 0x003c6200 /* VREF DAC Control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PHYBIST_CNTRL 0x003c6204 /* PhyBist Control Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PHYBIST_SEED 0x003c6208 /* PhyBist Seed Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PHYBIST_STATUS 0x003c620c /* PhyBist General Status Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PHYBIST_CTL_STATUS 0x003c6210 /* PhyBist Per-Bit Control Pad Status Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PHYBIST_DQ_STATUS 0x003c6214 /* PhyBist Per-Bit DQ Pad Status Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_PHYBIST_MISC_STATUS 0x003c6218 /* PhyBist Per-Bit DM and CK Pad Status Register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_STANDBY_CONTROL 0x003c621c /* Standby Control register */
#define BCHP_DDR34_PHY_CONTROL_REGS_1_DEBUG_FREEZE_ENABLE 0x003c6220 /* Freeze-on-error enable register */

#endif /* #ifndef BCHP_DDR34_PHY_CONTROL_REGS_1_H__ */

/* End of File */