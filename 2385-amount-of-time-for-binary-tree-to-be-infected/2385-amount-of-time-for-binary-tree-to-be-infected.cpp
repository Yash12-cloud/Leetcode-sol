class Solution {
public:
    TreeNode* fst ;
    void find(TreeNode* root , int start){
        if(root == NULL) return;
        if(root->val == start){
            fst = root;
        } 
        find(root->left,start);
        find(root->right,start);
    }
    void map_Parent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &m){
        if(root == NULL) return;
        if(root->left != NULL){
            m[root->left] =  root;
        }
        if(root->right != NULL){
            m[root->right] =  root;
        }
        map_Parent(root->left,m);
        map_Parent(root->right,m);
    }
    int amountOfTime(TreeNode* root, int start) {
        int max_Level = 0;
        find(root,start);
        if(fst == NULL) return 0;
        unordered_map<TreeNode*,TreeNode*> m; // child - Parent pair 
        map_Parent(root,m);// function to map child and Parent

        unordered_set<TreeNode*> is_Infected;// To check if they are infected or not

        queue< pair<TreeNode* ,int>> q;
        pair<TreeNode*,int> r;
        r.first = fst;
        r.second = 0;

        q.push(r);

        is_Infected.insert(fst);

        while(q.size() > 0){
            TreeNode* temp = (q.front()).first; // first element queue sa nikala ,root nikala
            int lvl = (q.front()).second; // level of current node in iteration
            max_Level = max(max_Level,(q.front()).second); // yaha sa maximum level nikalaga
            q.pop();

            if(temp->left != NULL){
                if(is_Infected.find(temp->left) == is_Infected.end()){ 
                    // matlab left vala node infected nahi hai tho usko queue ma dalo
                    pair<TreeNode*, int> p;
                    p.first = temp->left;
                    p.second = lvl + 1;
                    q.push(p);

                    // infected ma bhi dalna padega 
                    is_Infected.insert(temp->left);
                }
            }
            if(temp->right != NULL){
                if(is_Infected.find(temp->right) == is_Infected.end()){ 
                    // matlab right vala node infected nahi hai tho usko queue ma dalo
                    pair<TreeNode*, int> p;
                    p.first = temp->right;
                    p.second = lvl + 1;
                    q.push(p);

                    is_Infected.insert(temp->right);
                }
            }
            // find if parent exist using our map
            if(m.find(temp) != m.end()){
                // ab check kro kya parent infected hai kya
                if(is_Infected.find(m[temp]) == is_Infected.end()){
                    //iska matlab infected nahi hai tho usko queue ma dalo
                    pair<TreeNode*, int> p;
                    
                    p.first = m[temp];
                    p.second = lvl + 1;
                    q.push(p);

                    is_Infected.insert(m[temp]);
                }
            }
        }
        return max_Level;
       
    }
};