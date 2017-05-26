#ifndef TRIPLE_GENERATOR_LIBRARY_H
#define TRIPLE_GENERATOR_LIBRARY_H

class Triple {
    int a, b, c;
public:
    Triple(int a, int b, int c) : a(a), b(b), c(c) {}
};

Triple generate_triple();

#endif
