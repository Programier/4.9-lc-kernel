/*
 * Copyright (C) 2015 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _TRUSTY_LOG_H_
#define _TRUSTY_LOG_H_

/*
 * Ring buffer that supports one secure producer thread and one
 * linux side consumer thread.
 */
struct log_rb {
	uint32_t alloc;
	uint32_t put;
	uint32_t sz;
	char data[0];
} __packed;

#define SMC_SC_SHARED_LOG_VERSION	SMC_STDCALL_NR(SMC_ENTITY_LOGGING, 0)
#define SMC_SC_SHARED_LOG_ADD		SMC_STDCALL_NR(SMC_ENTITY_LOGGING, 1)
#define SMC_SC_SHARED_LOG_RM		SMC_STDCALL_NR(SMC_ENTITY_LOGGING, 2)

#define TRUSTY_LOG_API_VERSION	1

#endif

