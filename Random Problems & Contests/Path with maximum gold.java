//https://leetcode.com/problems/path-with-maximum-gold/

class Solution {
    
    public int getMaximumGold(int[][] grid)  {
        
        int mx=0, m=grid.length, n=grid[0].length;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] > 0)
                {
                    int gold = findMaximumGold(grid, i, j, m, n, new boolean [m][n]);
                    mx = Math.max(mx, gold);
                }
            }
        }
        
        return mx;
    }
    
     /*
        base case:
        
         Out of Boundaries
         visited[i][j] = true
         grid[i][j] is 0 */
    
       private int findMaximumGold(int[][] grid, int i, int j, int m, int n, boolean [][] visited){

            if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || visited[i][j]==true)
                return 0;
           
            visited[i][j]=true;
            int left = findMaximumGold(grid, i, j-1, m, n, visited);
            int right = findMaximumGold(grid, i, j+1, m, n, visited);
            int up = findMaximumGold(grid, i-1, j, m, n, visited);
            int down = findMaximumGold(grid, i+1, j, m, n, visited);
            visited[i][j]=false;
            return Math.max(left, Math.max(right, Math.max(up, down))) + grid[i][j];
        }
    
}