#include <vector>

class QuickFindUF {
private:
    std::vector<int> id;
    int count;
public:
    // initialize union-find data structure with N objects (0, N - 1)
    QuickFindUF(int n);

    // add connection between first and second
    void merge(int p, int q);

    // check if first and second are connected
    bool connected(int p, int q);
};