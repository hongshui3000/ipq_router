/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef __REG_TIERED_SM_TABLE_MAP_H__
#define __REG_TIERED_SM_TABLE_MAP_H__

#include "tiered_sm_table_map_macro.h"

struct sm_table_map {
  volatile u_int32_t BB_sm_tables_dummy1;         /*        0x0 - 0x4        */
  volatile unsigned int pad__0[0xbf];             /*        0x4 - 0x300      */
  volatile u_int32_t BB_dc_dac_mem_b0[52];        /*      0x300 - 0x3d0      */
  volatile unsigned int pad__1[0xc];              /*      0x3d0 - 0x400      */
  volatile u_int32_t BB_tpc_txgain_sram[96];      /*      0x400 - 0x580      */
  volatile u_int32_t BB_tpc_plut_sram[640];       /*      0x580 - 0xf80      */
  volatile u_int32_t BB_tpc_glut_sram[164];       /*      0xf80 - 0x1210     */
  volatile u_int32_t BB_tpc_alut_sram[160];       /*     0x1210 - 0x1490     */
  volatile u_int32_t BB_rxcal_tx_gain_table_0;    /*     0x1490 - 0x1494     */
  volatile u_int32_t BB_rxcal_tx_gain_table_1;    /*     0x1494 - 0x1498     */
  volatile u_int32_t BB_rxcal_tx_gain_table_2;    /*     0x1498 - 0x149c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_3;    /*     0x149c - 0x14a0     */
  volatile u_int32_t BB_rxcal_tx_gain_table_4;    /*     0x14a0 - 0x14a4     */
  volatile u_int32_t BB_rxcal_tx_gain_table_5;    /*     0x14a4 - 0x14a8     */
  volatile u_int32_t BB_rxcal_tx_gain_table_6;    /*     0x14a8 - 0x14ac     */
  volatile u_int32_t BB_rxcal_tx_gain_table_7;    /*     0x14ac - 0x14b0     */
  volatile u_int32_t BB_rxcal_tx_gain_table_8;    /*     0x14b0 - 0x14b4     */
  volatile u_int32_t BB_rxcal_tx_gain_table_9;    /*     0x14b4 - 0x14b8     */
  volatile u_int32_t BB_rxcal_tx_gain_table_10;   /*     0x14b8 - 0x14bc     */
  volatile u_int32_t BB_rxcal_tx_gain_table_11;   /*     0x14bc - 0x14c0     */
  volatile u_int32_t BB_rxcal_tx_gain_table_12;   /*     0x14c0 - 0x14c4     */
  volatile u_int32_t BB_rxcal_tx_gain_table_13;   /*     0x14c4 - 0x14c8     */
  volatile u_int32_t BB_rxcal_tx_gain_table_14;   /*     0x14c8 - 0x14cc     */
  volatile u_int32_t BB_rxcal_tx_gain_table_15;   /*     0x14cc - 0x14d0     */
  volatile u_int32_t BB_rxcal_tx_gain_table_16;   /*     0x14d0 - 0x14d4     */
  volatile u_int32_t BB_rxcal_tx_gain_table_17;   /*     0x14d4 - 0x14d8     */
  volatile u_int32_t BB_rxcal_tx_gain_table_18;   /*     0x14d8 - 0x14dc     */
  volatile u_int32_t BB_rxcal_tx_gain_table_19;   /*     0x14dc - 0x14e0     */
  volatile u_int32_t BB_rxcal_tx_gain_table_20;   /*     0x14e0 - 0x14e4     */
  volatile u_int32_t BB_rxcal_tx_gain_table_21;   /*     0x14e4 - 0x14e8     */
  volatile u_int32_t BB_rxcal_tx_gain_table_22;   /*     0x14e8 - 0x14ec     */
  volatile u_int32_t BB_rxcal_tx_gain_table_23;   /*     0x14ec - 0x14f0     */
  volatile u_int32_t BB_rxcal_tx_gain_table_24;   /*     0x14f0 - 0x14f4     */
  volatile u_int32_t BB_rxcal_tx_gain_table_25;   /*     0x14f4 - 0x14f8     */
  volatile u_int32_t BB_rxcal_tx_gain_table_26;   /*     0x14f8 - 0x14fc     */
  volatile u_int32_t BB_rxcal_tx_gain_table_27;   /*     0x14fc - 0x1500     */
  volatile u_int32_t BB_rxcal_tx_gain_table_28;   /*     0x1500 - 0x1504     */
  volatile u_int32_t BB_rxcal_tx_gain_table_29;   /*     0x1504 - 0x1508     */
  volatile u_int32_t BB_rxcal_tx_gain_table_30;   /*     0x1508 - 0x150c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_31;   /*     0x150c - 0x1510     */
  volatile u_int32_t BB_rxcal_rx_gain_table_0;    /*     0x1510 - 0x1514     */
  volatile u_int32_t BB_rxcal_rx_gain_table_1;    /*     0x1514 - 0x1518     */
  volatile u_int32_t BB_rxcal_rx_gain_table_2;    /*     0x1518 - 0x151c     */
  volatile u_int32_t BB_rxcal_rx_gain_table_3;    /*     0x151c - 0x1520     */
  volatile u_int32_t BB_rxcal_rx_gain_table_4;    /*     0x1520 - 0x1524     */
  volatile u_int32_t BB_rxcal_rx_gain_table_5;    /*     0x1524 - 0x1528     */
  volatile u_int32_t BB_rxcal_rx_gain_table_6;    /*     0x1528 - 0x152c     */
  volatile u_int32_t BB_rxcal_rx_gain_table_7;    /*     0x152c - 0x1530     */
  volatile u_int32_t BB_rxcal_rx_gain_table_8;    /*     0x1530 - 0x1534     */
  volatile u_int32_t BB_rxcal_rx_gain_table_9;    /*     0x1534 - 0x1538     */
  volatile u_int32_t BB_rxcal_rx_gain_table_10;   /*     0x1538 - 0x153c     */
  volatile u_int32_t BB_rxcal_rx_gain_table_11;   /*     0x153c - 0x1540     */
  volatile u_int32_t BB_rxcal_rx_gain_table_12;   /*     0x1540 - 0x1544     */
  volatile u_int32_t BB_rxcal_rx_gain_table_13;   /*     0x1544 - 0x1548     */
  volatile u_int32_t BB_rxcal_rx_gain_table_14;   /*     0x1548 - 0x154c     */
  volatile u_int32_t BB_rxcal_rx_gain_table_15;   /*     0x154c - 0x1550     */
  volatile u_int32_t BB_sm_hc_preemp_lut[412];    /*     0x1550 - 0x1bc0     */
  volatile u_int32_t BB_sm_tables_dummy2;         /*     0x1bc0 - 0x1bc4     */
};

struct tiered_sm_table_map {
  struct sm_table_map sm_table_map;               /*        0x0 - 0x1bc4     */
};

#endif /* __REG_TIERED_SM_TABLE_MAP_H__ */
