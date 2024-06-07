void dfs(long long u, vector<vector<long long>> &adj, vector<bool> &visited) {
    visited[u] = true;
    for (auto &v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited);
        }
    }
}