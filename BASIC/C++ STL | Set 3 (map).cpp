/*
Implement different operations on maps.

Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of three types 
1. a x y (adds a value with key x and value y to the map)
2. b x (print value of  x is present in the map else print -1. )
3. c (prints values x and y separated by space i.e., contents of map)

Output:
The output for each test case will  be space separated integers denoting the results of each query . 

Constraints:
1<=T<=100
1<=Q<=100
Example:

Input
2
4
a 1 2 a 66 3 b 66 c
3
a 1 66 b 5 c

Output
3 1 2 66 3
-1 1 66


Explanation :
For the first test case
There are four queries. Queries are performed in this order
1. a 1 2  -->  map has a key 1 with value 2 
2. a 66 3 --> map has a key 66 with value 3
3. b 66    --> prints the value of key 66 if its present in the map ie 3.
4. c    -->  print the contents of map separated by space ie ( 1 2 66 3 )
For the sec test case 
There are three queries. Queries are performed in this order
1. a 1 66 --> adds a key 1 with a value of 66 in the map
2. b 5      -->  since the key 5 is not present in the map hence -1 is printed.
3. c   --> prints contents of map separated by space ie(1 66)

Note:The Input/Output format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.
*/

/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y) {
    // Your code here
    m[x]=y;
    
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x) {
    if(m.find(x)!=m.end()){
        return m[x];
    }
    return -1;
    // Your code here
}

/* Prints contents of the map ie keys and values*/
    
void print_contents(map<int, int> &m) {
    // Your code here
    for(auto it=m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<" ";
    }
}

























