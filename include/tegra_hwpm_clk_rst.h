/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TEGRA_HWPM_CLK_RST_H
#define TEGRA_HWPM_CLK_RST_H

#ifdef __KERNEL__
#include <os/linux/clk_rst_utils.h>
#else
struct tegra_hwpm_os_linux;

int tegra_hwpm_clk_rst_prepare_impl(struct tegra_hwpm_os_linux *hwpm_linux)
{
	return -EINVAL;
}

int tegra_hwpm_clk_rst_set_rate_enable_impl(
	struct tegra_hwpm_os_linux *hwpm_linux)
{
	return -EINVAL;
}

int tegra_hwpm_clk_rst_disable_impl(struct tegra_hwpm_os_linux *hwpm_linux)
{
}

void tegra_hwpm_clk_rst_release_impl(struct tegra_hwpm_os_linux *hwpm_linux)
{
}
#endif

#define tegra_hwpm_clk_rst_prepare(hwpm_linux)			\
	tegra_hwpm_clk_rst_prepare_impl(hwpm_linux)

#define tegra_hwpm_clk_rst_set_rate_enable(hwpm_linux)		\
	tegra_hwpm_clk_rst_set_rate_enable_impl(hwpm_linux)

#define tegra_hwpm_clk_rst_disable(hwpm_linux)			\
	tegra_hwpm_clk_rst_disable_impl(hwpm_linux)

#define tegra_hwpm_clk_rst_release(hwpm_linux)			\
	tegra_hwpm_clk_rst_release_impl(hwpm_linux)

#endif /* TEGRA_HWPM_CLK_RST_H */