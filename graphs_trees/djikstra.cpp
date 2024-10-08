const int mod = 1e9 + 7;

vector<int> djikstra(int n, int src, const vector<vector<vector<int>>> &adj) {
    priority_queue<vector<int>, vector<vector<int>>> pq;
    vector<int> dp(n + 1, mod);
    dp[src] = 0; pq.push({0, src});

    while(!pq.empty()) {
        auto ver = pq.top(); pq.pop();
        if(dp[ver[1]] < ver[0]) continue;
        for(auto &i: adj[ver[1]]) {
            if(dp[i[0]] > i[1] + ver[0]) {
                dp[i[0]] = i[1] + ver[0];
                pq.push({dp[i[0]], i[0]});
            }
        }
    }
    return dp;
}
