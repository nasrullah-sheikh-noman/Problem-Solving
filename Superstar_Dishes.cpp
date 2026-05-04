vector<long long> findSuperstarDishes(vector<long long> &a, long long n) {
    sort(a.begin(), a.end());
    vector<long long> result;
    long long p = n/3;
    long long i = 0;
    while( i < n) {
        long long cnt = 1;
        while(a[i] == a[i+1] && i+1 < n) {
            cnt++;
            i++;
        }
        if(cnt > p) {
            result.push_back(a[i]);
        }
        i++;
    }
    return result;
}

