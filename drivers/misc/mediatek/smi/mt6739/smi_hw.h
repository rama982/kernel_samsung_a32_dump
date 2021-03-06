/*
 * Copyright (C) 2018 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __SMI_HW_H__
#define __SMI_HW_H__

#include <clk-mt6739-pg.h>
#include <smi_port.h>

#define SYS_DIS	(SYS_MM0)
static const u32 smi_subsys_to_larbs[NR_SYSS] = {
	[SYS_MM0] = ((1 << 0) | (1 << (SMI_LARB_NUM))),
	[SYS_VEN] = (1 << 1),
	[SYS_ISP] = (1 << 2),
};

#if IS_ENABLED(CONFIG_MMPROFILE)
#include <mmprofile.h>

static const char *smi_mmp_name[NR_SYSS] = {
	[SYS_MM0] = "MM0", [SYS_VEN] = "VEN", [SYS_ISP] = "ISP",
};
static mmp_event smi_mmp_event[NR_SYSS];
#endif
#endif
