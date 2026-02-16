/*
Given a 2-d array of integers having N*N elements, print the transpose of the array.

Example 1:

Input : arr[] = {{1,2,3}, {4,5,6}, 
                  {7,8,9}} and N = 3
Output : 1 4 7 2 5 8 3 6 9
Explanation:1 2 3       1 4 7
            4 5 6 ----> 2 5 8
            7 8 9       3 6 9
Transpose of array.

Example 2:

Input : arr[ ] = {{1, 2}, {1, 2}} 
                    and N = 2 
Output :  1 1 2 2
*/
vector<vector<int>> transpose(int a[][M], int n) {
    vector<vector<int>> result(n,vector<int>(n));
    // Code here
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[i][j]=a[j][i];
        }
    }
    return result;
}
