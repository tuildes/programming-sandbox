#include <stdbool.h>

bool power_of_two(const int x) {
    return ((x > 0) && !((x & (x - 1))));
}

