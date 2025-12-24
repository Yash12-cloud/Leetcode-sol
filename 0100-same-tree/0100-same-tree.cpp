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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q == NULL) return true;
        if(q == NULL || p == NULL) return false;
        
        if(p->val != q->val) return false;
        bool lst = isSameTree(p->left,q->left);
        if(!lst) return false;
        bool rst = isSameTree(p->right,q->right);
        if(!rst) return false;

        return true;
    }
};