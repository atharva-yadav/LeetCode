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
class Solution {
public:
    
    void rec(TreeNode* temp, int level, vector<int> &v) {
        
        if(temp == nullptr)
            return;
        
        if(level == v.size())
            v.push_back(temp->val);
        
        rec(temp->right, level+1, v);
        rec(temp->left, level+1, v);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* temp = root;
        vector<int> v;
        rec(root, 0, v);
        
        return v;
    }
};