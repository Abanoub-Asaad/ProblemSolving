class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<double>ans;
        q.push(root);
             
        while (!q.empty())
        {
            double sum_level=0, len=q.size();
            
            for(int i=0; i<len; i++)
            {
                TreeNode* temp_node = q.front();
                q.pop();   
                sum_level+=temp_node->val;
                
                if (temp_node->left) q.push(temp_node->left);
                if (temp_node->right) q.push(temp_node->right); 
            }
            ans.push_back(sum_level/len);
        }

       return ans; 
    }
};
