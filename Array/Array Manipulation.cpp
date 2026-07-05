/*
Example
Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1

STDIN       Function
-----       --------
5 3         arr[] size n = 5, queries[] size q = 3
1 2 100     queries = [[1, 2, 100], [2, 5, 100], [3, 4, 100]]
2 5 100
3 4 100
Sample Output

200
Explanation

After the first update the list is 100 100 0 0 0.
After the second update list is 100 200 100 100 100.
After the third update list is 100 200 200 200 100.

The maximum value is .
*/
long arrayManipulation(int n, vector<vector<int>> queries) {
        int size=queries.size();
        int a,b,k;
        vector<long long >arr(n,0);
        for(int i=0;i<size;i++){
            a=queries[i][0];
            b=queries[i][1];
            k=queries[i][2];
            arr[a-1]=arr[a-1]+k;
            if(b<n)
            arr[b]=arr[b]-k;
        }
        long long maxi=0;
        long long curr_sum=0;
        for(int j=0;j<n;j++){
            curr_sum+=arr[j];
            if(curr_sum>maxi){
                maxi=curr_sum;
            }
        }
        return maxi;
        
}
