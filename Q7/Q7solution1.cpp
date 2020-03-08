/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*采用左右递归，因此时间较长*/ 
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, 0, inorder.size() - 1);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int gen, int start, int end){
        if(start > end) 
        {
            return NULL;
        }
        TreeNode *tree = new TreeNode(preorder[gen]);
        int i = start;
        while(i < end && preorder[gen] != inorder[i]) 
        {
            i++;
        }
        tree->left = build(preorder, inorder, gen + 1, start, i - 1);
        tree->right = build(preorder, inorder, gen + 1 + i - start, i + 1, end);
        return tree;
    }
};
