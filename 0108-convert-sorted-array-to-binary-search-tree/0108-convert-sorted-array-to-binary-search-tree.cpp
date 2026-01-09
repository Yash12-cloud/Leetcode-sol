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
    void helper(TreeNode* &root,int low,int high,vector<int> &nums){
        if(low>high) return;
        int mid = (low+high)/2;
        if(root == NULL) root = new TreeNode(nums[mid]);
        helper(root->left,low,mid-1,nums);
        helper(root->right,mid+1,high,nums);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        int low = 0;
        int high = nums.size()-1;
        helper(root,low,high,nums);
        return root;
    }
};