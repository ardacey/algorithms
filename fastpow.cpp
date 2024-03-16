long long fp(long long a, long long b, long long k) {
    if (b == 0) return 1;
    if (b % 2 == 1) return (a * fp(a, b - 1, k)) % k;
    long long half = fp(a, b / 2, k);
    return (half * half) % k;
}