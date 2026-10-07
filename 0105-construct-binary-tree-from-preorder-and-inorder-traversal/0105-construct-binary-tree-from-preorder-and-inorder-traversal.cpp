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
    map<int,int>pos;
    int preid=0;

public:
    TreeNode* build(vector<int>& po, int inL, int inR) {
        if (inL > inR) return nullptr;

        int val = po[preid++];
        TreeNode* root = new TreeNode(val);
        int mid = pos[val];


        root->left = build(po, inL, mid - 1);
        root->right = build(po, mid + 1, inR);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preid = 0;
        pos.clear();


        for (int i = 0; i < inorder.size(); i++) {
            pos[inorder[i]] = i;
        }

        return build(preorder, 0, inorder.size() - 1);
    }
};