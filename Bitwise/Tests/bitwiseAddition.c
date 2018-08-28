#include <assert.h>
#include "../bitwiseAddition.c"

int main (void) {
    assert(bitwise_addition(10,5) == (10 + 5));
    assert(bitwise_addition(5, 10) == (5 + 10));
    assert(bitwise_addition(0, 1) == (0 + 1));
    assert(bitwise_addition(2, 0) == (2 + 0));
    assert(bitwise_addition(-27, 3) == (-27 + 3));
    assert(bitwise_addition(27, -3) == (27 + -3));
    assert(bitwise_addition(-1, -1) == (-1 + -1));

    assert(bitwise_addition_recursive(2, 3) == (2 + 3));
    assert(bitwise_addition_recursive(3, 2) == (3 + 2));
    assert(bitwise_addition_recursive(1, 0) == (1 + 0));
    assert(bitwise_addition_recursive(0, 3) == (0 + 3));
    assert(bitwise_addition_recursive(25, -50) == (25 + -50));
    assert(bitwise_addition_recursive(-25, 50) == (-25 + 50));
    assert(bitwise_addition_recursive(-5, -10) == (-5 + -10));

    printf("Testing Completed !!!\n");
    return 0;
}
