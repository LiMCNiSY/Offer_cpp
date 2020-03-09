/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root;
        if(preorder.size() == 0){
            return NULL;
        }
        if(preorder.size() == 1){
            root = new TreeNode(preorder[0]);
            return root;
        }
        vector<int>::iterator head;
        head = find(inorder.begin(), inorder.end(), preorder[0]);
        int pos = head - inorder.begin();
        vector<int> leftInorder(inorder.begin(), head);
        vector<int> leftPreorder(preorder.begin() + 1, preorder.begin() + pos + 1);
        vector<int> rightInorder(head + 1, inorder.end());
        vector<int> rightPreorder(preorder.begin() + pos + 1, preorder.end());
        root = new TreeNode(*head);
        root->left = buildTree(leftPreorder, leftInorder);
        root->right = buildTree(rightPreorder, rightInorder);
        return head;    

    }

};
