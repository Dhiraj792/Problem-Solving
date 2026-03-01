/*
Rahul loves to play with numbers, he challenges his friend Ankush with a problem related to numbers in which he has to first reverse the order of two digits and then swap them. Let us take the two digits as a and b.

Examples :

Input: a = 1234, b = 67890
Output: 9876 4321
Explanation: Reversing the given two numbers will give: 4321 and 9876. After swapping it would come as: 9876 and 4321.
Input: a = 10000, b = 3254
Output: 4523 1
*/
void reverse_dig(int &a, int &b) {
    // Add your code here.
    int aans=0,bans=0;
    while(a>0){
        aans=aans*10+(a%10);
        a/=10;
    }
      while(b>0){
        bans=bans*10+(b%10);
        b/=10;
    }
    a=aans;
    b=bans;
    
}

void swap(int &a, int &b) {
    a=a^b;
    b=a^b;
    a=a^b;
}
