// Copyright 2022 Stefan Kerkmann (KarlK90)
// Copyright 2022 Ulrich Spörlein (@uqs)
// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2019 Sunjun Kim
// Copyright 2020 Ploopy Corporation
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <stdint.h>

#if !defined(PMW33XX_CPI)
#    define PMW33XX_CPI 1600U
#endif

#define PMW33XX_CPI_STEP 100
#define PMW33XX_CPI_MIN 100
#define PMW33XX_CPI_MAX 12000

#define PMW33XX_FIRMWARE_LENGTH 4094

// PMW3360 register addresses
// clang-format off
#define REG_Product_ID                   0x00
#define REG_Revision_ID                  0x01
#define REG_Motion                       0x02
#define REG_Delta_X_L                    0x03
#define REG_Delta_X_H                    0x04
#define REG_Delta_Y_L                    0x05
#define REG_Delta_Y_H                    0x06
#define REG_SQUAL                        0x07
#define REG_Raw_Data_Sum                 0x08
#define REG_Maximum_Raw_data             0x09
#define REG_Minimum_Raw_data             0x0a
#define REG_Shutter_Lower                0x0b
#define REG_Shutter_Upper                0x0c
#define REG_Control                      0x0d
#define REG_Config1                      0x0f
#define REG_Config2                      0x10
#define REG_Angle_Tune                   0x11
#define REG_Frame_Capture                0x12
#define REG_SROM_Enable                  0x13
#define REG_Run_Downshift                0x14
#define REG_Rest1_Rate_Lower             0x15
#define REG_Rest1_Rate_Upper             0x16
#define REG_Rest1_Downshift              0x17
#define REG_Rest2_Rate_Lower             0x18
#define REG_Rest2_Rate_Upper             0x19
#define REG_Rest2_Downshift              0x1a
#define REG_Rest3_Rate_Lower             0x1b
#define REG_Rest3_Rate_Upper             0x1c
#define REG_Observation                  0x24
#define REG_Data_Out_Lower               0x25
#define REG_Data_Out_Upper               0x26
#define REG_Raw_Data_Dump                0x29
#define REG_SROM_ID                      0x2a
#define REG_Min_SQ_Run                   0x2b
#define REG_Raw_Data_Threshold           0x2c
#define REG_Config5                      0x2f
#define REG_Power_Up_Reset               0x3a
#define REG_Shutdown                     0x3b
#define REG_Inverse_Product_ID           0x3f
#define REG_LiftCutoff_Tune3             0x41
#define REG_Angle_Snap                   0x42
#define REG_LiftCutoff_Tune1             0x4a
#define REG_Motion_Burst                 0x50
#define REG_LiftCutoff_Tune_Timeout      0x58
#define REG_LiftCutoff_Tune_Min_Length   0x5a
#define REG_SROM_Load_Burst              0x62
#define REG_Lift_Config                  0x63
#define REG_Raw_Data_Burst               0x64
#define REG_LiftCutoff_Tune2             0x65
// clang-format on
