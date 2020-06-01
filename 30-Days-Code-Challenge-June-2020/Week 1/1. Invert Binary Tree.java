/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode invertTree(TreeNode root) {
        
        dfs(root);
        return root;
    }
    
    public void dfs(TreeNode node) {
        if (node != null) {
            
            TreeNode tmp_node = node.left;
            node.left = node.right;
            node.right = tmp_node;
            dfs(node.left);
            dfs(node.right);
        }
    }
}