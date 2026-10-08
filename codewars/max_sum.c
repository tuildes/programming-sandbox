#include <stddef.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxSequence(const int array[], size_t n) {
    if (n == 0) { return 0; }
    int bestSum = currentSum = 0;

    for (size_t i = 0; i < n; i++) {
        currentSum = max(array[i], (currentSum + array[i]));
        bestSum = max(bestSum, currentSum);
    }

    return bestSum;
}

