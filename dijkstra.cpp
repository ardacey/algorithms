int dijkstra( vector<vector<pair<int, int>>> adj, int source, int target) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(adj.size(), INT_MAX);
    pq.push({0, source});
    dist[source] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        vector<pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    return dist[target];
}