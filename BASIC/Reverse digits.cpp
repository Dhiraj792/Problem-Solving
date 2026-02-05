class Solution {
  public:
    int reverseDigits(int n) {
       int remainder;
       int reversed_number=0;
       while(n!=0){
        remainder = n % 10;          
        reversed_number = reversed_number * 10 + remainder; 
        n /= 10;   
       }
       return reversed_number;
    }
};
