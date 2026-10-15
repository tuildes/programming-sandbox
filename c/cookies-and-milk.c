#include <time.h>
#include <stdbool.h>

bool time_for_milk_and_cookies (const struct tm *date) {
	return ((date->tm_mday == 24) && (date->tm_mon == 11));
}
