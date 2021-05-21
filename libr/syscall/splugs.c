/* radare - LGPL - Copyright 2009-2021 - pancake, nibble */

#include <stdio.h>
#include <r_types.h>
#include <r_util.h>
#include <r_asm.h>

#if HAVE_GPERF
extern GdbGperf gperf_darwin_arm_32;
extern GdbGperf gperf_darwin_arm_64;
extern GdbGperf gperf_darwin_x86_32;
extern GdbGperf gperf_darwin_x86_64;
extern GdbGperf gperf_dos_x86_16;
extern GdbGperf gperf_freebsd_x86_32;
extern GdbGperf gperf_ios_arm_32;
extern GdbGperf gperf_ios_arm_64;
extern GdbGperf gperf_ios_x86_32;
extern GdbGperf gperf_linux_arm_32;
extern GdbGperf gperf_linux_arm_64;
extern GdbGperf gperf_linux_mips_32;
extern GdbGperf gperf_linux_sparc_32;
extern GdbGperf gperf_linux_x86_32;
extern GdbGperf gperf_linux_x86_64;
extern GdbGperf gperf_netbsd_x86_32;
extern GdbGperf gperf_openbsd_x86_32;
extern GdbGperf gperf_openbsd_x86_64;
extern GdbGperf gperf_s110_arm_16;
extern GdbGperf gperf_windows_x86_32;
extern GdbGperf gperf_windows_x86_64;

static const SdbGperf *gperfs[] = {
	&gperf_darwin_arm_32,
	&gperf_darwin_arm_64,
	&gperf_darwin_x86_32,
	&gperf_darwin_x86_64,
	&gperf_dos_x86_16,
	&gperf_freebsd_x86_32,
	&gperf_ios_arm_32,
	&gperf_ios_arm_64,
	&gperf_ios_x86_32,
	&gperf_linux_arm_32,
	&gperf_linux_arm_64,
	&gperf_linux_mips_32,
	&gperf_linux_sparc_32,
	&gperf_linux_x86_32,
	&gperf_linux_x86_64,
	&gperf_netbsd_x86_32,
	&gperf_openbsd_x86_32,
	&gperf_openbsd_x86_64,
	&gperf_s110_arm_16,
	&gperf_windows_x86_32,
	&gperf_windows_x86_64,
	NULL
};

R_API SdbGperf *r_syscal_get_gperf(const char *k) {
	SdbGperf **gp = (SdbGperf**)gperfs;
	while (*gp) {
		SdbGperf *g = *gp;
		if (!strcmp (k, g->name)) {
			return *gp;
		}
		gp++;
	}
	return NULL;
}
#else
R_API SdbGperf *r_asm_get_gperf(const char *k) {
	return NULL;
}
#endif
