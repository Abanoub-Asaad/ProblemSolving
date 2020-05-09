//Problem Link : https://leetcode.com/problems/student-attendance-record-i/

class Solution {
public:
    
    bool checkRecord(string s) {
        
        int cnt_A=0;
        
        for(int i=0; i<s.size(); i++)
            if(s[i]=='A')
                cnt_A++;
        
        if(cnt_A>1 || s.find("LLL")!=-1) 
            return false;
            
        return true;
        
    }
};