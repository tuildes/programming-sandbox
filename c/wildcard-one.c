#include <string.h>

int match (const char *pattern, const char *filename) {
    if (strlen(pattern) != strlen(filename)) { return 0; }

    for (int i = 0; pattern[i] != '\0'; i++) {
        if (pattern[i] == '?') { continue; }
        if (pattern[i] != filename[i]) { return 0; }
    }

    return 1;
}

