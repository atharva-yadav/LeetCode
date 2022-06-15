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

// Source- TakeUForward.com
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr)
            return {};
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
        int len;
        while(!q.empty())
        {
             len=q.size();
		     vector<int> v1;
            for(int i=0; i<len; i++)
            {
                TreeNode* curr = q.front();
                v1.push_back(curr->val);
                q.pop();
                
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};