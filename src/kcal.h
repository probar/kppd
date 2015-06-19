/*
 * Copyright (c) 2015 savoca <savoca@codefi.re>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <stdint.h>

#include "msm_mdp.h"

#define MAX_KCAL_DATA 4
#define TARGET_FB "/dev/graphics/fb0"
#define IGC_LUT_ENTRIES 256

uint32_t block;
uint32_t ops_enable;
uint32_t ops_disable;

int write_pp(struct msmfb_mdp_pp *pp);
int write_pcc(int red, int green, int blue);
int write_pa(int hue, int sat, int val, int cont);
int write_pa_v2(int hue, int sat, int val, int cont);
int write_igc(int invert);