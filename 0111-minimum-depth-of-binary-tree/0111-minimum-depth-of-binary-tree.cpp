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
    int minDepth(TreeNode* r) {
        if(!r)return 0;
        if(!r->left && !r->right)return 1;

        if(!r->left)return 1+minDepth(r->right);
        if(!r->right)return 1+minDepth(r->left);
       
       return 1 + min(minDepth(r->left), minDepth(r->right));
        
    }
};