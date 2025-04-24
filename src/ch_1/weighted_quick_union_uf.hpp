#include <vector>

class WeightedQuickUnionUF {
    private:
        std::vector<int> id;
        int count;

        int root(int i);
    public:
        WeightedQuickUnionUF(int n);
        bool connected(int p, int q);
        void merge(int p, int q);
};