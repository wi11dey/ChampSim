/**
 * Define some types here so that the rest of the code is more simulator-independent and readable.
 *
 * Implementation author: Will Dey
 */

#ifndef PREFETCHER_STEMS_STEMS_PREFTETCHER_TYPES_H
#define PREFETCHER_STEMS_STEMS_PREFTETCHER_TYPES_H

#include <map>
#include <string>

#include <sys/types.h>

namespace stems {

/*
 * Integer type used for program counter values.
 */
using pc = uint64_t;

/*
 * Integer type used to represent memory addresses in the simulator.
 */
using address = uint64_t;

using reconstruction_delta = uint64_t;

using access_count = uint64_t;

using cache_access_type = uint8_t;

using stat = uint64_t;

using stream_queue_id = unsigned int;

}

#endif
