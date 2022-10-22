int rowWithMax1s(vector<vector<int>> a, int n, int m) {
    int ans = -1, mi = m;
    for(int i=0; i<n; i++){
        int idx = upper_bound(a[i].begin(), a[i].end(), 0) - a[i].begin();
        if(idx<mi) {
            mi = idx;
            ans = i;
        }
    }
    return ans;
}
