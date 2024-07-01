int median(vector<vector<int>> &matrix, int m, int n) {
    vector<int>store;
    int k=matrix.size();

    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            store.push_back(matrix[i][j]);
        }
    }
    sort(store.begin(),store.end());
    return store[store.size()/2];
}