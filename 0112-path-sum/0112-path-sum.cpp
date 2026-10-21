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
    bool hasPathSum(TreeNode* r, int ts) {
        if(!r)return false;

        if(!r->left && !r->right){
            return ts==r->val;
        }

        bool ls=hasPathSum(r->left,ts-r->val);
        bool rs=hasPathSum(r->right,ts-r->val);

        return ls||rs;
        
    }
};