#include <bits/stdc++.h>

vector<int> findMedian(vector<int> &arr, int n){

    

    // Write your code here 

    vector<int>ans;

    priority_queue<int> max_heap; // max-heap for the lower half of the numbers

    priority_queue<int, vector<int>, greater<int>> min_heap; 

    for(int i=0; i<n; ++i)

    {

        if(max_heap.empty() || arr[i]<=max_heap.top())

        {

            max_heap.push(arr[i]);

        }

        else

        {

            min_heap.push(arr[i]);

        }

        if(max_heap.size()>min_heap.size()+1)

        {

            min_heap.push(max_heap.top());

            max_heap.pop();

        }

        else if(max_heap.size()+1<min_heap.size())

        {

            max_heap.push(min_heap.top());

            min_heap.pop();

        }

        if(max_heap.size()==min_heap.size())

        {

            ans.push_back((max_heap.top()+min_heap.top())/2);

        }

        else if (max_heap.size() > min_heap.size()) {

            ans.push_back(max_heap.top());

        } else {

            ans.push_back(min_heap.top());

        }

    }

    return ans;

}
