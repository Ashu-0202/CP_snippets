class BLIFT {
private:
    int n;
    vector<array<int, 20>> lift;
    vector<int> dpth;

    void dfs(const vector<vector<int>> &adj, int i, int p = -1) {
        lift[i][0] = p;
        for (auto &u : adj[i]) {
            if (u == p)  continue;
            dpth[u] = dpth[i] + 1;
            dfs(adj, u, i);
        }
    }

public:
    BLIFT(const vector<vector<int>> &adj) {
        n = adj.size();
        lift.resize(n);
        dpth.resize(n);
        fill(all(dpth), 0);
        for (int i = 0 ; i < n ; i++)
            lift[i].fill(-1);
        dfs(adj, 0);
        for (int j = 1 ; j < 20 ; j++) {
            for (int i = 0 ; i < n ; i++) {
                lift[i][j] = lift[i][j - 1];
                if (lift[i][j] != -1) lift[i][j] = lift[lift[i][j]][j - 1];
            }
        }
    }

    int kthanc(int node, int d) {
        for (int i = 19; i >= 0 ; i--) {
            if (node != -1 && (d >> i) & 1) node = lift[node][i];
        }
        return node;
    }
    int lca(int x, int y) {
        if (dpth[x] > dpth[y])   swap(x, y);
        y = kthanc(y, dpth[y] - dpth[x]);
        if (x == y)  return x;
        for (int i = 19 ; i >=   0 ; i--) {
            if (lift[y][i] != lift[x][i])    x = lift[x][i], y = lift[y][i];
        }
        return lift[x][0];
    }
    int distance(int x, int y){
        return dpth[x] + dpth[y] - 2 * dpth[lca(x,y)];
    }
};
