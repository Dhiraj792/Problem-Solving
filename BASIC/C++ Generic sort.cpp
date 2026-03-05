/*
You need to sort elements of an array a[] of size n, where the array can be of following data-types:

Integer
String
floating number
Examples :

Input: 3 3
34.23 -4.35 3.4
Output: -4.35 3.4 34.23 
Explanation:The array is of floating type. After sorting the elements of array are as such: -4.35 3.4 34.23
Input: 4 1
123 -2311 837 0 
Output: -2311 0 123 837 
Explanation:The array is of Integer type. After sorting the elements of array are as such: -2311 0 123 837 
Constraints:
1 <= T <= 50
1 <= n <= 10000
1 <= q <= 3
1 <= Integer <= 100000
1.0 <= Floating Number <= 100000.0
1 <= String.size() <= 100
String consists of only lowercase English alphabets
*/
template <class T>
void sortArray(T a[], int n) {
    sort(a,a+n);
    //a is staring address and a+n is ending address
}

template <class T>
void printArray(T a[], int n) {
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
















