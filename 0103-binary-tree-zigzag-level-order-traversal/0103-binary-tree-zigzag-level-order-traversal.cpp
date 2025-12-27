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
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    void PrintLvl(TreeNode* root,int Lvl,int target,vector<int> &res){
        if(root == NULL) return;
        if(Lvl == target){
            res.push_back(root->val);
            return;     
        }
        PrintLvl(root->left,Lvl+1,target,res);//left
        PrintLvl(root->right,Lvl+1,target,res);//right
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int n = level(root);
        for(int i = 1; i <= n; i++){
            vector<int> res;
            PrintLvl(root,1,i,res);
            if(i % 2 == 0){
                reverse(res.begin(),res.end());
            }
            ans.push_back(res);
        }
        return ans;
    }
};