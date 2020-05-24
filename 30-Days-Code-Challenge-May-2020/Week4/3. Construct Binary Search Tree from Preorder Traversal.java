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
    public TreeNode bstFromPreorder(int[] preorder) {
        
        TreeNode root = new TreeNode(preorder[0]);  
        if(preorder.length==1)
            return root;
        
        for(int i=1; i<preorder.length; i++)
            setNode(root, preorder[i]);
        
        return root;
    
    }
    
   public void setNode(TreeNode node, int val){
       if(val<node.val)
       {
           if(node.left==null)
               node.left = new TreeNode(val);
           else 
               setNode(node.left, val);
       }
       else
       {
           if(node.right==null)
               node.right = new TreeNode(val);
           else 
               setNode(node.right, val);
       }
   }
}