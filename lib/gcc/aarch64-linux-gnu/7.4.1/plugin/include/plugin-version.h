#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   7
#define GCCPLUGIN_VERSION_MINOR   4
#define GCCPLUGIN_VERSION_PATCHLEVEL   1
#define GCCPLUGIN_VERSION  DragonTC-CLANG-9

static char basever[] = "9.0.0";
static char datestamp[] = "20190306";
static char devphase[] = "";
static char revision[] = "[DragonTC-CLANG]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
