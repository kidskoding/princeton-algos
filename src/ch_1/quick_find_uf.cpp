#include "uf.hpp"

QuickFindUF::UF(int n) {
    count = n;
    id.resize(n);

    for(int i = 0; i < n; i++) {
        id[i] = i;
    }
}

void QuickFindUF::merge(int p, int q) {
    int pID = id[p];
    int qID = id[q];
    for(int i = 0; i < id.size(); i++) {
        if(id[i] == pID) { id[i] = qID; }
    }
}

bool QuickFindUF::connected(int p, int q) {
    return id[p] == id[q];
}