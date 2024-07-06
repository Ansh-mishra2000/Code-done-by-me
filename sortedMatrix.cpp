#include <bits/stdc++.h> 

vector<int> sortedMatrix(vector<vector<int>> &mat, int n) {

    // Write your code here.

    vector<int> v;

    //Store 2d matrix in 1d vector

    for(int row=0; row<n; row++) {

        for(int col=0; col<n; col++) {

            v.push_back(mat[row][col]);

        }

    }

    //Sort that vector

    sort(v.begin(), v.end());

    return v;

}
