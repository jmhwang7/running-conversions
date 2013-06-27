#include "conversions.h"

float mile_time_to_mph(int minute, int second) {
	float result = 0.0;
	result = 60 / (minute + (float) second / 60);
	return result;
}