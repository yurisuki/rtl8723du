/******************************************************************************
*
* Copyright(c) 2012 - 2017 Realtek Corporation.
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of version 2 of the GNU General Public License as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
******************************************************************************/

#ifdef CONFIG_RTL8723D

#ifndef _FW_HEADER_8723D_H
#define _FW_HEADER_8723D_H

#ifdef LOAD_FW_HEADER_FROM_DRIVER
#if defined(CONFIG_AP_WOWLAN)
extern u8 array_mp_8723d_fw_ap[24140];
extern u32 array_length_mp_8723d_fw_ap;
#endif

extern u8 array_mp_8723d_fw_nic[27828];
extern u32 array_length_mp_8723d_fw_nic;
#ifdef CONFIG_WOWLAN
extern u8 array_mp_8723d_fw_wowlan[31616];
extern u32 array_length_mp_8723d_fw_wowlan;
#endif /*CONFIG_WOWLAN*/
#endif /* end of LOAD_FW_HEADER_FROM_DRIVER */

#endif

#endif

