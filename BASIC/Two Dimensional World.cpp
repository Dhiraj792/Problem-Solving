/*
In CPP we can't pass 2D arrays in normal way to a function. The array has to be declared in a special way.

Given a 2D array arr[ ][ ] of size N x N consisting of integers. The task is to print all the elements in matrix (row and column order) form.

Example :

Input: 3
1 2 3
4 5 6
7 8 9
Output: 
1 2 3
4 5 6
7 8 9
Explanation: Elements of 2D array in row-column order are as mentioned in Sample Output.
*/
/* Function to take input for 2D array elements
 * Note : Mention matrix in argument also.
 * N : size of matrix
 */
void twoDimensional(int **arr, int N) {

    // Loop to iterate through matrix
    // and print all the matrix elements row wise
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
