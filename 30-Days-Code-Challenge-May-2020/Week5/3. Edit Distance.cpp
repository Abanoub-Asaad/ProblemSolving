//-------------------- Using DP "Accepted"
class Solution {
public:
    int minDistance(string word1, string word2) {
        
        return editDist(word1, word2, word1.size(), word2.size());
        
    }
    
    int calc_min(int x, int y, int z) { 
    return min(min(x, y), z); 
} 
   
    int editDist(string str1, string str2, int m, int n){
        
        int dp[m+1][n+1];
        
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(!i) 
                    dp[i][j] = j;
                
                else if(!j)
                    dp[i][j] = i;
                
                else if(str1[i - 1] == str2[j - 1]) 
                     dp[i][j] = dp[i - 1][j - 1]; 
                
                else
                    dp[i][j] = 1 + calc_min(dp[i][j - 1], // Insert 
                                            dp[i - 1][j], // Remove 
                                            dp[i - 1][j - 1]); // Replace 
            }
        }
        return dp[m][n];
    } 
    
};

//-------------------- Using Recursion TimeLimit test 25/1146
class Solution {
public:
    int minDistance(string word1, string word2) {
        
        return editDist(word1, word2, word1.size(), word2.size());
        
    }
    
    int calc_min(int x, int y, int z) { 
    return min(min(x, y), z); 
} 
   
    int editDist(string str1, string str2, int m, int n){
        
        if(!m) return n;
        if(!n) return m;
        if (str1[m - 1] == str2[n - 1]) 
            return editDist(str1, str2, m - 1, n - 1); 
        
        return 1 + calc_min(editDist(str1, str2, m, n - 1), // Insert 
                   editDist(str1, str2, m - 1, n), // Remove 
                   editDist(str1, str2, m - 1, n - 1) // Replace 
                   ); 
    } 
    
};