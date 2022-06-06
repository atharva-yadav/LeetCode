/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


// Solution taken from TAKEUFORWARD

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* curr = root;
        TreeNode* newnode = new TreeNode(val);
        
        if(root == NULL){
            return newnode;
        }
        
        while(true)
        {
            if(curr->val < val){
                if(curr->right != NULL){
                    curr = curr->right;
                }
                else{
                    curr->right = newnode;
                    break;
                }
            }
            else if(curr->val > val){
                if(curr->left != NULL){
                    curr = curr->left;
                }
                else{
                    curr->left = newnode;
                    break;
                }
            }
        }
        return root;
    }
};