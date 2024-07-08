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
//approach III
int findSmallerElements(vector<vector<int>>&matrix,int assumeMedian){
    int noOfElements=0;
    for(int i=0;i<matrix.size();i++){
        //matrix[i]->0,1,2
        //apply Binary Searchon matrix[i]

        int start=0;
        int end=matrix[i].size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(matrix[i][mid]<=assumeMedian) start=mid+1;
            else end=mid-1;
        }
        noOfElements+=start;
    }
    return noOfElements;
}
int median(vector<vector<int>> &matrix, int m, int n) {
    int N=m*n;
    int medianIndex=N/2;
    int start=1;
    int end=1000000000;
    

    while(start<=end){
        int assumeMedian=start+(end-start)/2;
        //no of elements less than assumed median
        int lesserElements=findSmallerElements(matrix,assumeMedian);

        if(lesserElements<=medianIndex) start=assumeMedian+1;
        else end=assumeMedian-1;
    }
    return start;
}
