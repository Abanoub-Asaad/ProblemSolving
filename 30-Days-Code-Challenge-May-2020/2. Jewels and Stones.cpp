class Solution {
    
public:
    
    int numJewelsInStones(string J, string S) {
        
        set <char> set_chars_J ;
        int cnt=0 ;
        
        for(int i=0; i<J.size(); i++)
            set_chars_J.insert(J[i]);
        
        for(int i=0; i<S.size(); i++)
            if(set_chars_J.count(S[i]))
                ++cnt ;
        
        return cnt ;
            
    }
};