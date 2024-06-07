void bfs(long long u, vector<vector<long long>> &adj, vector<bool> &visited) {
    queue<long long> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        long long u = q.front();
        q.pop();
        for (auto &v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}