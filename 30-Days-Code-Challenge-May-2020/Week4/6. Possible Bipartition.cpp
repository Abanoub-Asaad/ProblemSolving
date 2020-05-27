class Solution {
public:

    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        
        vector<int> groups(N, -1); //-1 not assigned yet, 0 -> is a group, 1 -> is another group
        vector<vector<int> > adj(N, vector<int>());
        
        //implement the graph using adjacency list 
        for(int i=0; i<dislikes.size(); ++i)
        {
            int x=dislikes[i][0], y=dislikes[i][1];
            adj[x - 1].push_back(y - 1);
            adj[y - 1].push_back(x - 1);
        }
        
        //here we don't loop over all the nodes, but we only loop over the unvisited nodes by dfs
        for(int i=0; i<N; ++i) 
        {
            if(groups[i] == -1 && !dfs(adj, groups, i, 0))
                return false;
        }
        
        return true;
    }
    
    bool dfs(vector<vector<int>>&adj, vector<int>&groups, int index, int grp){
        
        //if the node isn't assigned yet
        if(groups[index] == -1) groups[index] = grp; 
        //here there's no need to use dfs,Instead we check if the two nodes're in the same group or not 
        else                return (groups[index] == grp); 
        
        for(auto n : adj[index])
        {
            if(!dfs(adj, groups, n, 1 - grp))
                return false;
        }
        
        return true;
    }
};