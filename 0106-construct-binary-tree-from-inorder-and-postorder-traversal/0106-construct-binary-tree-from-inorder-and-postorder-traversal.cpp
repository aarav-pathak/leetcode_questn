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
map<int, int> map;
    int postIdx;

    TreeNode* build( vector<int>& io,  vector<int>& po, int inL, int inR) {
        if (inL > inR) return NULL;


        int val = po[postIdx--];
        TreeNode* root = new TreeNode(val);


        int mid = map[val];


        root->right = build(io, po, mid + 1, inR);
        root->left  = build(io, po, inL, mid - 1);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& io, vector<int>& po) {
        postIdx = po.size() - 1;
        for (int i = 0; i < io.size(); i++) {
            map[io[i]] = i;
        }
        return build(io, po, 0, io.size() - 1);
    }
};