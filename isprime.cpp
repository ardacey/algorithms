bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long x = 2; x * x <= n; x++) {
        if (n % x == 0) return false;
    }
    return true;
}