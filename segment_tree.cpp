void build(int x, int l, int r) {
    if(l == r) {
        st[x] = v[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*x, l, mid);
    build(2*x+1, mid+1, r);
    st[x] = st[2*x] + st[2*x+1];
}

void update(int x, int l, int r, int pos, int val) {
    if(l > pos || r < pos) return;
    if(l == r) {
        st[x] = val;
        return;
    }
    int mid = (l+r)/2;
    update(2*x, l, mid, pos, val);
    update(2*x+1, mid+1, r, pos, val);
    st[x] = st[2*x] + st[2*x+1];
}

int query(int x, int l, int r, int ql, int qr) {
    if(l > qr || r < ql) return 0;
    if(l >= ql && r <= qr) return st[x];
    int mid = (l+r)/2;
    return query(2*x, l, mid, ql, qr) + query(2*x+1, mid+1, r, ql, qr);
}

