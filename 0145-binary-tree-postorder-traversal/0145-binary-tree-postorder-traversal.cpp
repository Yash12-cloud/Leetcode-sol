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
    void PostOrder(TreeNode* root, vector<int> &ans){
        // Recursive code
        // if(root == NULL) return;
        // PostOrder(root->left,ans);
        // PostOrder(root->right,ans);
        // ans.push_back(root->val);

        // Iterative code

        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size() > 0){
            TreeNode* temp = st.top();
            ans.push_back(temp->val);
            st.pop();

            if(temp->left != NULL) st.push(temp->left);
            if(temp->right != NULL) st.push(temp->right);//ya upar rahna cheya 
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        PostOrder(root,ans);
        // only for iterative
        reverse(ans.begin(),ans.end());

        return ans;
    }
};
static const bool __boost = [] ()
{
    std::cin.tie (nullptr);
    std::cout.tie (nullptr);
    return std::ios_base::sync_with_stdio (false);
}();

// Custom memory pool for dynamic allocation using a pre-allocated buffer
const size_t BUFFER_SIZE = 0x30000000;
alignas (std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void *
operator new (size_t size)
{
    constexpr std::size_t alignment = alignof (std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char *aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}

void
operator delete (void * /*unused*/, unsigned long /*unused*/) noexcept
{
}
void
operator delete (void * /*unused*/) noexcept
{
}
void
operator delete[] (void * /*unused*/) noexcept
{
}
void
operator delete[] (void * /*unused*/, size_t /*unused*/) noexcept
{
}