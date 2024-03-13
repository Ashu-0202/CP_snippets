struct DSU {
    int n, cmps;
    vector<int> p, sub, cnt;
    DSU () {}
    DSU(int n_) : n(n_), cmps(n_) {
        p.resize(n+1);
        sub.resize(n+1, 1);
        cnt.resize(n + 1, 1);
        iota(p.begin(), p.end(), 0);
    }
    int parent(int i) {
        assert(i <= n);
        return p[i] = (p[i] == i ? i : parent(p[i]));
    }
    bool join(int x, int y) {
        assert(x <= n && y <= n);
        x = parent(x), y = parent(y);
        if(x == y) {
            return false;
        }
        --cmps;
        if(sub[x] > sub[y]) {
            swap(x, y);
        }
        sub[y] += sub[x];
        cnt[y] += cnt[x];
        cnt[x] = 0;
        p[x] = y;
        return true;
    }
};
