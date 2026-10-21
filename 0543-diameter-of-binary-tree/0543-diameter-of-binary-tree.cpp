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
int h(TreeNode* r,int &d){
   if(!r)return 0;

    int l=h(r->left,d);
    int R=h(r->right,d);

    d =max(d,l+R);
    return max(l,R)+1;
}
    int diameterOfBinaryTree(TreeNode* r) {

        int d=0;
        h(r,d);

        return d;
        
    }
};