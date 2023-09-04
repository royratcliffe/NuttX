#include <nuttx/config.h>

#include "nvic.h"
#include "chip.h"
#include "arm_internal.h"

#if defined(CONFIG_AMP)
int up_cpu_index() {
  return (getreg32(NVIC_CPUID_BASE) & 0x000000f0ul) >> 4;
}
#endif
