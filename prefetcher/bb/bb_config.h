/*
 * You can configure parameters for the BB prefetcher through this header.
 * Documentation relevant to each parameter is given above its corresponding
 * #define.
 *
 * These parameters can be overridden at compile time by defining their values
 * through the '-D' flag for the compiler/preprocessor.
 *
 * Author: Will Dey
 */

#include "../../inc/champsim.h"

#ifndef BB_SPATIAL_NUM_BEFORE
#define BB_SPATIAL_NUM_BEFORE 16
#endif

#ifndef BB_SPATIAL_NUM_AFTER
#define BB_SPATIAL_NUM_AFTER 16
#endif

#ifndef BB_GHB_SIZE
#define BB_GHB_SIZE 10000000
#endif

#ifndef BB_DEGREE
#define BB_DEGREE 1
#endif

#ifndef BB_SKIP_DEGREE
#define BB_SKIP_DEGREE 8
#endif
