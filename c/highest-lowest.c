#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

void high_and_low (const char *strnum, char *result) {
    int low = INT_MAX, high = INT_MIN, temp;
    char *copy = (char*)malloc(sizeof(char) * (strlen(strnum) + 1));
    strcpy(copy, strnum);
    char *token, *rest = copy;

    while ((token = strtok_r(rest, " ", &rest))) {
        temp = atoi(token);
        if (temp < low) { low = temp; }
        if (temp > high) { high = temp; }
    }

    sprintf(result, "%d %d", high, low);
    free(copy);
}
