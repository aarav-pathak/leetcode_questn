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
int dh(TreeNode* r){
    if(!r) return 0;
    int lh=dh(r->left);
    if(lh==-1)return -1;
    int rh=dh(r->right);
    if(rh==-1)return -1;

    if(abs(lh-rh)>1)return -1;
    return max(lh,rh)+1;
}
    bool isBalanced(TreeNode* r) {
                return dh(r)!=-1;
        
    }
};