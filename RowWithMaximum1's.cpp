int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {

    // Write Your Code Here

 

    //Store row wise count of 1 in array

    int arr[n];

    int c1 = 0;

    

    for(int i=0; i<n; i++) {

        int count=0; 

        for(int j=0; j<m; j++) {

            if(matrix[i][j] == 1) {

                count++;

            }

        }

        //counting number of 1 in each row and add count at arr[row]

        arr[i] = count;

        if(count == m) {

            return i;

        }

        //total number of 1 

        c1 = c1 + count;

    }

 

    //If all 0 then return -1;

    if(c1 == 0) {

        return -1;

    }

 

    //find index of max element in array

    int max = -1,ans;

    for(int i=0; i<n; i++) {

        if(max<arr[i]) {

            max = arr[i];

            ans = i;

        }

    }

    return ans;

    

}
