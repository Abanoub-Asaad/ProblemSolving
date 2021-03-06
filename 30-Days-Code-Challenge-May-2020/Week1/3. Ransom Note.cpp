class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int size_ransomNote = ransomNote.size();
        int size_magazine = magazine.size() ;
        int cnt=0 ;
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        for(int i=0,j=0; i<size_magazine; i++){
            if(magazine[i]==ransomNote[j])
                ++cnt, ++j ;
        }

        if(cnt==size_ransomNote)  
            return true;
        else 
            return false;

    }
};