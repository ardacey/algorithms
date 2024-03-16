void countingSort(vector<long long>& arr, long long n){
    long long max = *max_element(arr.begin(), arr.end());
    long long min = *min_element(arr.begin(), arr.end());
    long long range = max - min + 1;
    vector<long long> count(range), output(n);
    for (long long i = 0; i < n; i++)
        count[arr[i] - min]++;
    for (long long i = 1; i < count.size(); i++)
        count[i] += count[i - 1];
    for (long long i = n - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
    for (long long i = 0; i < n; i++)
        arr[i] = output[i];
}