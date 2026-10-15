#include <stdlib.h>

unsigned long long total_allocated = 0;

void *mem_alloc(size_t size) {
    void *alloc = malloc(size);
    if (alloc) { total_allocated+=size; }
    return alloc;
}

unsigned long long report_total_allocated(void) {
    return total_allocated;
}

