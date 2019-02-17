mconf:
	$(MAKE) -C ../../../Tools/MakefileScripts/kconfig/
	$(MAKE) -C ../../../Tools/MakefileScripts/lxdialog/


menuconfig : mconf
	../../../Tools/MakefileScripts/kconfig/mconf -kmKconfig -C.config -H./panel_autoconf.h
	rm -f ../../../Platform_Lib/TVScalerControl/panel/panelAPI.o
