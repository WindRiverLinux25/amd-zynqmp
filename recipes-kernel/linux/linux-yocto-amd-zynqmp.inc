#
# Copyright (C) 2019 Wind River Systems, Inc.
#


COMPATIBLE_MACHINE:amd-zynqmp = "amd-zynqmp"

TARGET_SUPPORTED_KTYPES:amd-zynqmp = "standard"

KERNEL_VERSION_SANITY_SKIP = "1"
SRCREV_machine:amd-zynqmp ?= "${AUTOREV}"
SRCREV_meta:amd-zynqmp ?= "${AUTOREV}"

KERNEL_DTC_FLAGS:append:amd-zynqmp = " -@"
