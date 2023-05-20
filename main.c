#include <stdio.h>
#include <inttypes.h>
#include "math.h"

int main(void) {
    uint64_t result;

    result = add(1, 2);
    printf("1 + 2 = %" PRIu64 "\n", result);
    return 0;
}