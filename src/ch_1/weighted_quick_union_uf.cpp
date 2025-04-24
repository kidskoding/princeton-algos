#include "weighted_quick_union_uf.hpp"

WeightedQuickUnionUF::WeightedQuickUnionUF(int n) {
    this->count = n;
    id.resize(n);

    for(int i = 0; i < n; i++) {
        id[i] = i;
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
    id[i] = j;
}