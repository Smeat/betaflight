#include "laptime.h"

static laptime_t last_lap = {0,0,0};

void set_lap(laptime_t* lap) {
	last_lap = *lap;
}

laptime_t get_last_lap() {
	return last_lap;
}
