#ifndef __LIS3DH_C
#define __LIS3DH_C
#include "esp_system.h"

#if CONFIG_LIS3DH_INTERFACE_SPI
#error "SPI interface for LIS3DH is not yet supported"
#endif

esp_err_t LIS3DH_Init();

#endif //__LIS3DH_C
