#include "library.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Triple generate_triple(int u, int v) {
    int a = (u * u) - (v * v);
    int b = 2 * u * v;
    int c = (u * u) + (v * v);
    return Triple(a, b, c);
}

Triple generate_triple() {
    srand((unsigned) time(NULL));
    int u = rand();
    int v = rand();
    return generate_triple(u, v);
}
