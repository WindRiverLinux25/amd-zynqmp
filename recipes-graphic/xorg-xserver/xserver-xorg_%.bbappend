PACKAGECONFIG:remove:amd-zynqmp = "${@bb.utils.contains('PREFERRED_PROVIDER_virtual/egl', 'libmali-xlnx', ' dri glx xwayland', '', d)}"
DEPENDS:append:amd-zynqmp = "${@bb.utils.contains('PACKAGECONFIG', 'dri3', ' libxshmfence', '', d)}"
