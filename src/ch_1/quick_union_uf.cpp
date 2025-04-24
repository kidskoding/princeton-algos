#include "quick_union_uf.hpp"

QuickUnionUF::QuickUnionUF(int n) {
    count = n;
    id.resize(n);

    for(int i = 0; i < n; i++) {
        id[i] = i;
    }
}

int QuickUnionUF::root(int i) {
    while(i != id[i]) {
        i = id[i];
    }
    return i;
}

bool QuickUnionUF::connected(int p, int q) {
    return root(p) == root(q);
}

void QuickUnionUF::merge(int p, int q) {
    int i = root(p);
    int j = root(q);
    id[i] = j;
}