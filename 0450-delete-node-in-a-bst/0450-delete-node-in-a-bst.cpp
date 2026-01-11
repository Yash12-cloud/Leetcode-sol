class Solution {
public:
    TreeNode* iop(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right != NULL){
            pred = pred->right;
        }
        return pred;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val == key){
            
            // Case 1 : No Child
            if(root->left == NULL && root->right == NULL) return NULL;

            // Case 2 : 1 child
            if(root->left == NULL || root->right == NULL){
                if(root->left != NULL) return root->left;
                else return root->right;
            }

            // Case 3 : 2 Childern
            if(root->left != NULL && root->right != NULL){
                // Replace the root with its inorder pred/secc
                // after replacing delete the pred/succ node
                TreeNode* pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
            }
        }
        else if(root->val > key){// go to left
                root->left = deleteNode(root->left,key);
        }
        else{// root->vl < key : go to right
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
};