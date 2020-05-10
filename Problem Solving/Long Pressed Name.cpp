//Problem Link : https://leetcode.com/problems/long-pressed-name/

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0, j=0;
        while(j<=typed.size()){
            if(name[i]==typed[j])
                ++i, ++j;
            else 
            {
                if(i>0 && typed[j]==name[i-1] )
                    ++j;
                else 
                    return false;               
            }
        }
        return true;
    }
};