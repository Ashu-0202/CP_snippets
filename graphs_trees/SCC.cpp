class SCC {
private:
    vector<vector<int>> v, a;
    set<pair<int, int>> s;
    int n, time = 1;
    void dfs1 (int i) {
        vis[i] = 1;
        for (auto &x : v[i]) {
            if (vis[x]) continue;
            dfs1(x);
        }
        tout[i] = time++;
        s.insert({ -tout[i], i});
    }

    void dfs2 (int i) {
        vis[i] = 0, mark[i] = nSCC;
        for (auto &x : a[i]) {
            if (vis[x] == 0) continue;
            dfs2(x);
        }
    }

    void build() {
        for (int i = 0; i < n; i++)
            if (!vis[i]) dfs1(i);
        while (s.size()) {
            auto x = *s.begin();
            s.erase(x);
            if (vis[x.ss] == 0) continue;
            nSCC++;
            dfs2(x.ss);
        }
    }

public:
    int nSCC = 0;
    vector<int> tout, vis;
    vector<int> mark;

    SCC(vector<vector<int>> &adj) {
        n = adj.size(); v = adj;
        a.resize(n);
        for (int i = 0; i < n; i++)
            for (auto &x : v[i]) a[x].push_back(i);
        tout.assign(n + 1, -1);
        vis.assign(n + 1, 0); mark.assign(n, -1);
        build();
    }
};
