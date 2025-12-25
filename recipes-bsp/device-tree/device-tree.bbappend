FILESEXTRAPATHS:prepend:amd-zynqmp := "${THISDIR}/files:"

EXTRA_DT_INCLUDE_FILES:append:amd-zynqmp = " disable-smmu.dtsi"

COMPATIBLE_MACHINE:amd-zynqmp = "amd-zynqmp"
