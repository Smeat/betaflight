#ifndef _LAPTIMER_H_
#define _LAPTIMER_H_

#include <stdint.h>

typedef struct laptime_s {
	uint8_t pilot;
	uint8_t lap;
	uint32_t time;
} laptime_t;

void set_lap(laptime_t* lap);
laptime_t get_last_lap();

#endif // _LAPTIMER_H_
