#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    // Write your code here.
    pair <int,int> p;
    p.first=-1;
    p.second=-1;
    int low=0;
    int n=matrix.size();
    int high=n*n-1;
    while(low<=high ){
        int mid=(low+high)/2;
        if(x==matrix[mid/n][mid%n]){
            p.first=mid/n;
            p.second=mid%n;
            return p;
        }
        else if(x>matrix[mid/n][mid%n]) low=mid+1;
        else high=mid-1;
    }
    return p;
    
}
