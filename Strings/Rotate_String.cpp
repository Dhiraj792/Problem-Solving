
class Solution {
public:
    bool rotateString(string s, string goal) {
        int l1=s.length();
        int l2=goal.length();
        string temp=s+s;
        if(l1!=l2){
            return false;
        }
        else{
           if(temp.find(goal)!=string::npos){
            return true;
           }
           else
           return false;
        }
    }
};
