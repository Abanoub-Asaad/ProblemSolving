class Solution {
public:
    int maxPower(string s) {
   
        int mx=1, cnt=1;
        
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1])
                cnt++;
            else 
                mx=max(cnt,mx), cnt=1;
        }
          
        return (max(mx,cnt));
            
    }
};