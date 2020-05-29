using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int> > adj(numCourses, vector<int>());
        vector<int> visited(numCourses, 0);
        
        // 0 -> unvisited,  1 -> being visited,  2 -> completely visited  
         
        
        for(int i=0; i<prerequisites.size(); ++i)
        {
            int x = prerequisites[i][0] , y = prerequisites[i][1];
            adj[x].push_back(y);
        }
        
        for(int i=0; i<numCourses; ++i)
            if(!visited[i] && !dfs(adj, visited, i))  return false;
        
        return true;
    }
    
    bool dfs(vector<vector<int>>& adj, vector<int>& visited, int v){
        
        if(visited[v]==1) return false;
        visited[v] = 1;
        for(int i=0; i<adj[v].size(); ++i)
            if(!dfs(adj, visited, adj[v][i])) return false;
        
        visited[v] = 2;
        return true;
    }
};
