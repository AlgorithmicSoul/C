#include <stdio.h>

int powerOfTwo (long long x) {
    return x && (!(x & (x-1)));
}