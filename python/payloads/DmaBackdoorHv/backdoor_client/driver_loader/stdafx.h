extern "C"
{
#include <ntifs.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <ntimage.h>
#include "undocnt.h"
}

#pragma intrinsic(memset)
#pragma intrinsic(memcpy)

#include "common.h"
#include "asm/common_asm.h"

#include "runtime/import.h"
#include "runtime/import/ntoskrnl.h"
#include "runtime/runtime.h"

#include "debug.h"

#include "../vmx.h"
#include "../backdoor_client.h"
#include "../backdoor_library.h"
#include "../common/peimage.h"
#include "../driver_loader.h"
