//approach I
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

//Approach II

int median(vector<vector<int>> &matrix, int m, int n) {
    int mini=INT_MAX;
    int maxi=INT_MIN;

    for(int i=0;i<m;i++){
        mini=min(mini,matrix[i][0]);
    }

    for(int i=0;i<m;i++){
        maxi=max(maxi,matrix[i][n-1]);
    }

    int start=mini;
    int end=maxi;

    while(start<=end){
        int mid=start+(end-start)/2;
        int count=0;

        for(int i=0;i<m;i++){
            count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }

        if(count<(m*n+1)/2) start=mid+1;
        else end=mid-1;
    }
    return start;
}
