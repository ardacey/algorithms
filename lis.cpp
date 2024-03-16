using namespace std;

long long lis(vector<long long> &a) {
    int n = a.size();
    vector<long long> dp(n, 1);
    for (int i = 1; i < n; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}