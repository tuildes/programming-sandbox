#include <stdlib.h>
#include <stdio.h>

int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
    int* arr = (int*)malloc(sizeof(int) * rows * cols);
    if (!arr) { return NULL; }
    
    *outsz = (rows * cols);
    
    size_t lb = 0, rb = (cols - 1),
           ub = 0, bb = (rows - 1),
           counter = 0;

    while (lb <= rb && ub <= bb) {
        for (size_t j = lb; j <= rb; j++)
            arr[counter++] = mx[ub][j];
        
        ub++;
        if (ub > bb) break;

        for (size_t i = ub; i <= bb; i++)
            arr[counter++] = mx[i][rb];

        if (rb == 0) break;
        rb--;
        if (lb > rb) break;

        for (size_t j = rb + 1; j-- > lb; )
            arr[counter++] = mx[bb][j];

        if (bb == 0) break;
        bb--;
        if (ub > bb) break;

        for (size_t i = bb + 1; i-- > ub; )
            arr[counter++] = mx[i][lb];
        
        lb++;
    }

    return arr;
}
