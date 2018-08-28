#include <assert.h>
#include "../powerOfTwo.c"

int main (void) {
    assert(powerOfTwo(10) == 0);
    assert(powerOfTwo(5) == 0);
    assert(powerOfTwo(4) != 0);
    assert(powerOfTwo(128) != 0);
    assert(powerOfTwo(127) == 0);
    assert(powerOfTwo(-27) == 0);
    assert(powerOfTwo(-1) == 0);
    assert(powerOfTwo(-256) == 0);

    printf("Testing Completed !!!\n");

    return 0;
}