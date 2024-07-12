//approach I

#include <bits/stdc++.h>
void insertionSort(vector<int> &sortedArray,int newElement){
    sortedArray.push_back(newElement);
    for(int i=1;i<sortedArray.size();i++){
        int key=sortedArray[i];
        int j=i-1;

        while(j>=0 && key>sortedArray[j]){
            sortedArray[j+1]=sortedArray[j];
            j=j-1;
        }
        sortedArray[j+1]=key;
    }
}
int findMedian(vector<int> sortedArray){
    int n=sortedArray.size();
    if(n%2==0) return (sortedArray[n/2-1] + sortedArray[n/2])/2;
    else return sortedArray[n/2];
}
vector<int> findMedian(vector<int> &arr, int n){
    
    vector<int>ans;
    vector<int>sortedArray;


	for(int i=0;i<n;i++){
        int element=arr[i];
        insertionSort(sortedArray,arr[i]);
        ans.push_back(findMedian(sortedArray));
    }
    return ans;
}

