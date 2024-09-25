template<class T>
class BIT {
public:
    int n;
    vector<T> tree;
    BIT(int __n = 0) : n(__n + 1) {
        tree = vector<T>(n, 0);
    }
    BIT(const vector<T> &a, int __n) : n(__n + 1) {
        tree.resize(n);
        for (int i = 0 ; i < n - 1 ; i++) {
            update(i, a[i]);
        }
    }
    void update(int i, T delta) {
        for (i++ ; i < n ; i += (i & -i))
            tree[i] += delta;
    }
    T query(int i) {
        T sum = 0;
        for (i++ ; i > 0 ; i -= i & -i)
            sum += tree[i];
        return sum;
    }
};
