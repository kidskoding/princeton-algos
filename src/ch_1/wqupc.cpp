#include "wqupc.hpp"

WeightedQuickUnionUF::WeightedQuickUnionUF(int n) {
    this->count = n;
    id.resize(n);
    sz.resize(n);

    for(int i = 0; i < n; i++) {
        id[i] = i;
        sz[i] = i;
    }
}

int WeightedQuickUnionUF::root(int i) {
    while(i != id[i]) {
        id[i] = id[id[i]];
        i = id[i];
    }
    return i;
}

bool WeightedQuickUnionUF::connected(int p, int q) {
    return root(p) == root(q);
}

void WeightedQuickUnionUF::merge(int p, int q) {
    int i = root(p);
    int j = root(q);
    if(i == j) {
        return;
    }

    if(sz[i] == sz[j]) {
        id[i] = j;
        sz[j] += sz[i];
    } else {
        id[j] = i;
        sz[i] += sz[j];
    }
}