#include <stdbool.h>

bool IsIsogram (const char *string)  {
    bool letters[26] = { 0 };
    int letter;

    for (int i = 0; string[i] != '\0'; i++) {
        letter = string[i] - ((string[i] >= 'a') ? 'a' : 'A');
        if (letters[letter]) { return false; }
        letters[letter] = true;
    }

	return true;
}
