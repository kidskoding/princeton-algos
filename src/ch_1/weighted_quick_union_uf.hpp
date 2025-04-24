#include <vector>

class WeightedQuickUnionUF {
    private:
        std::vector<int> id;
        std::vector<int> sz;
        int count;

        int root(int i);
    public:
        WeightedQuickUnionUF(int n);
        bool connected(int p, int q);
        void merge(int p, int q);
};