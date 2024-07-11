//apporach I
#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{   
    pair<int,int>p;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==x){
                p=make_pair(i,j);
                return p;
            }
        }
    }
    return make_pair(-1,-1);
}
//approach II
#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    int row=matrix.size();
    int col=matrix[0].size();

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0){
        int element=matrix[rowIndex][colIndex];

        if(element==x) return make_pair(rowIndex,colIndex);

        if(element<x) rowIndex++;

        else colIndex--;
    }
    return make_pair(-1,-1);
}
