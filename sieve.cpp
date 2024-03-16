#include <vector>
using namespace std;

const int MAX_N = 1e7;
vector<bool> sieve(MAX_N, true);
vector<long long> primes;

void generateSieve() {
    sieve[0] = sieve[1] = false;
    for (long long i = 2; i * i <= MAX_N; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j <= MAX_N; j += i)
                sieve[j] = false;
        }
    }
    for (long long i = 2; i <= MAX_N; i++) {
        if (sieve[i]) primes.push_back(i);
    }
}