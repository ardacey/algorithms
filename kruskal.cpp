struct Edge {
    long long u, v, w;

    Edge(long long u, long long v, long long w) : u(u), v(v), w(w) {}
};

bool operator<(const Edge &a, const Edge &b) {
    return a.w < b.w;
}

long long kruskal(vector<Edge> &edges, long long n) {
    sort(edges.begin(), edges.end());
    vector<long long> p(n);
    for (long long i = 0; i < n; i++) {
        p[i] = i;
    }
    function<long long(long long)> find = [&](long long x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    };
    function<void(long long, long long)> unite = [&](long long x, long long y) {
        x = find(x);
        y = find(y);
        if (x != y) {
            p[x] = y;
        }
    };
    long long ans = 0;
    for (auto &e : edges) {
        if (find(e.u) != find(e.v)) {
            unite(e.u, e.v);
            ans += e.w;
        }
    }
    return ans;
}