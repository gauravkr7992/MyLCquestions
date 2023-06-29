class Solution {
public:
vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        
        
        if(root!=NULL){
            res.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        if(root==NULL) res.push_back(-1);
        return res;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector <int> p1;
        vector<int>q1;
        p1=preorderTraversal(p);
        res.clear();
        q1=preorderTraversal(q);
        if(p1==q1) return true;
        else return false;
    }
};
