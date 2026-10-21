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

void po(TreeNode*r,vector<int>&v){
    if(!r)return ;
    v.push_back(r->val);
    po(r->left,v);
    po(r->right,v);
}
    bool isUnivalTree(TreeNode* r) {

        int ans=r->val;

        vector<int>v;
        po(r,v);

        for(int x:v){
            if(ans!=x)return false;
        }

return true;
        
    }
};