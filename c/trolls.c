#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c) {
    if (c < 'a') { c += ('a' - 'A'); }
    return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'));
}

char *disemvowel(const char *str) {
    char *res = malloc(sizeof(char) * (strlen(str) + 1));
    if (!res) { return NULL; }
    unsigned int endIndex = 0;

    for (unsigned int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) { continue; }
        res[endIndex++] = str[i];
    }

    res[endIndex] = '\0';

	return res;
}

