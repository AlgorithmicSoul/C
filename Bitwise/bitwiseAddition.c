#include <stdio.h>

int bitwise_addition (int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int bitwise_addition_recursive (int x, int y) {
    if (y==0) return x;
    else return bitwise_addition_recursive (x^y, (x & y) << 1);
}
