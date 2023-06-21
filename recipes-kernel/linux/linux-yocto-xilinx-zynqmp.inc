#
# Copyright (C) 2019 Wind River Systems, Inc.
#


COMPATIBLE_MACHINE:xilinx-zynqmp = "xilinx-zynqmp"

TARGET_SUPPORTED_KTYPES:xilinx-zynqmp = "standard"

KERNEL_VERSION_SANITY_SKIP = "1"
SRCREV_machine:xilinx-zynqmp ?= "${AUTOREV}"
SRCREV_meta:xilinx-zynqmp ?= "${AUTOREV}"

KERNEL_DTC_FLAGS:append:xilinx-zynqmp = " -@"
