#include <vector>

class QuickUnionUF {
    private:
        std::vector<int> id;
        int count;

        int root(int i);
    public:
        QuickUnionUF(int n);
        bool connected(int p, int q);
        void merge(int p, int q);
};