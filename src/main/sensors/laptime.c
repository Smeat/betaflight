#include "laptime.h"

static laptime_t last_lap = {0,0,0};


void set_lap(laptime_t* lap) {
	last_lap.pilot = lap->pilot;
	last_lap.lap = lap->lap;
	last_lap.time = lap->time;
}

laptime_t get_last_lap() {
	return last_lap;
}
