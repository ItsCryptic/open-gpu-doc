/*
 * Copyright (c) 2021, NVIDIA CORPORATION. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _clc673_h_
#define _clc673_h_

#ifdef __cplusplus
extern "C" {
#endif

#define NVC673_DISP_CAPABILITIES 0xC673

typedef volatile struct _clc673_tag0 {
    NvU32 dispCapabilities[0x400];
} _NvC673DispCapabilities,NvC673DispCapabilities_Map ;


#define NVC673_SYS_CAP                                                0x0 /* RW-4R */
#define NVC673_SYS_CAP_HEAD0_EXISTS                                          0:0 /* RWIVF */
#define NVC673_SYS_CAP_HEAD0_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD0_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD1_EXISTS                                          1:1 /* RWIVF */
#define NVC673_SYS_CAP_HEAD1_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD1_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD2_EXISTS                                          2:2 /* RWIVF */
#define NVC673_SYS_CAP_HEAD2_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD2_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD3_EXISTS                                          3:3 /* RWIVF */
#define NVC673_SYS_CAP_HEAD3_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD3_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD4_EXISTS                                          4:4 /* RWIVF */
#define NVC673_SYS_CAP_HEAD4_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD4_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD5_EXISTS                                          5:5 /* RWIVF */
#define NVC673_SYS_CAP_HEAD5_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD5_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD6_EXISTS                                          6:6 /* RWIVF */
#define NVC673_SYS_CAP_HEAD6_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD6_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD7_EXISTS                                          7:7 /* RWIVF */
#define NVC673_SYS_CAP_HEAD7_EXISTS_NO                                0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD7_EXISTS_YES                               0x00000001 /* RW--V */
#define NVC673_SYS_CAP_HEAD_EXISTS(i)                            (0+(i)):(0+(i)) /* RWIVF */
#define NVC673_SYS_CAP_HEAD_EXISTS__SIZE_1                                     8 /*       */
#define NVC673_SYS_CAP_HEAD_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_HEAD_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR0_EXISTS                                           8:8 /* RWIVF */
#define NVC673_SYS_CAP_SOR0_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR0_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR1_EXISTS                                           9:9 /* RWIVF */
#define NVC673_SYS_CAP_SOR1_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR1_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR2_EXISTS                                         10:10 /* RWIVF */
#define NVC673_SYS_CAP_SOR2_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR2_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR3_EXISTS                                         11:11 /* RWIVF */
#define NVC673_SYS_CAP_SOR3_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR3_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR4_EXISTS                                         12:12 /* RWIVF */
#define NVC673_SYS_CAP_SOR4_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR4_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR5_EXISTS                                         13:13 /* RWIVF */
#define NVC673_SYS_CAP_SOR5_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR5_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR6_EXISTS                                         14:14 /* RWIVF */
#define NVC673_SYS_CAP_SOR6_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR6_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR7_EXISTS                                         15:15 /* RWIVF */
#define NVC673_SYS_CAP_SOR7_EXISTS_NO                                 0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR7_EXISTS_YES                                0x00000001 /* RW--V */
#define NVC673_SYS_CAP_SOR_EXISTS(i)                             (8+(i)):(8+(i)) /* RWIVF */
#define NVC673_SYS_CAP_SOR_EXISTS__SIZE_1                                      8 /*       */
#define NVC673_SYS_CAP_SOR_EXISTS_NO                                  0x00000000 /* RW--V */
#define NVC673_SYS_CAP_SOR_EXISTS_YES                                 0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA                                       0x10 /* RW-4R */
#define NVC673_IHUB_COMMON_CAPA_MEMPOOL_ENTRIES                             15:0 /* RWIUF */
#define NVC673_IHUB_COMMON_CAPA_MEMPOOL_ENTRY_WIDTH                        17:16 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_MEMPOOL_ENTRY_WIDTH_32B               0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_MEMPOOL_ENTRY_WIDTH_64B               0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_MEMPOOL_ENTRY_WIDTH_128B              0x00000002 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_MEMPOOL_ENTRY_WIDTH_256B              0x00000003 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_ROTATION                           18:18 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_ROTATION_FALSE                0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_ROTATION_TRUE                 0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_PLANAR                             19:19 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_PLANAR_FALSE                  0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_PLANAR_TRUE                   0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_VGA                                20:20 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_VGA_FALSE                     0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_VGA_TRUE                      0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MEMPOOL_COMPRESSION                21:21 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MEMPOOL_COMPRESSION_FALSE     0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MEMPOOL_COMPRESSION_TRUE      0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MSCG                               22:22 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MSCG_FALSE                    0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MSCG_TRUE                     0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MCLK_SWITCH                        23:23 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MCLK_SWITCH_FALSE             0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_MCLK_SWITCH_TRUE              0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_LATENCY_EVENT                      26:26 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_LATENCY_EVENT_FALSE           0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_SUPPORT_LATENCY_EVENT_TRUE            0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_REQUEST_SIZE_PER_LINE_NON_ROTATION         31:30 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPA_REQUEST_SIZE_PER_LINE_NON_ROTATION_32B 0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_REQUEST_SIZE_PER_LINE_NON_ROTATION_64B 0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_REQUEST_SIZE_PER_LINE_NON_ROTATION_128B 0x00000002 /* RW--V */
#define NVC673_IHUB_COMMON_CAPA_REQUEST_SIZE_PER_LINE_NON_ROTATION_256B 0x00000003 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC                                       0x18 /* RW-4R */
#define NVC673_IHUB_COMMON_CAPC_PITCH_REQUEST_SIZE                           1:0 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPC_PITCH_REQUEST_SIZE_32B                0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_PITCH_REQUEST_SIZE_64B                0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_PITCH_REQUEST_SIZE_128B               0x00000002 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_PITCH_REQUEST_SIZE_256B               0x00000003 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_MAX_LINES_BUFFERED                           6:4 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPC_MAX_LINES_BUFFERED_NONE               0x00000000 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_MAX_LINES_BUFFERED_TWO                0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_MAX_LINES_BUFFERED_FOUR               0x00000002 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_MAX_LINES_BUFFERED_EIGHT              0x00000003 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_MAX_LINES_BUFFERED_SIXTEEN            0x00000004 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_SUPPORT_SEMI_PLANAR                        11:11 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPC_SUPPORT_SEMI_PLANAR_FALSE             0x00000000 /* RWI-V */
#define NVC673_IHUB_COMMON_CAPC_SUPPORT_SEMI_PLANAR_TRUE              0x00000001 /* RW--V */
#define NVC673_IHUB_COMMON_CAPC_SUPPORT_HOR_VER_FLIP                       12:12 /* RWIVF */
#define NVC673_IHUB_COMMON_CAPC_SUPPORT_HOR_VER_FLIP_FALSE            0x00000000 /* RWI-V */
#define NVC673_IHUB_COMMON_CAPC_SUPPORT_HOR_VER_FLIP_TRUE             0x00000001 /* RW--V */

#ifdef __cplusplus
};
#endif /* extern C */
#endif //_clc673_h_
