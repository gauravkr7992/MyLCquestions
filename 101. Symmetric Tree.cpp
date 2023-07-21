class Solution {
public:
    vector<int> leftT(TreeNode* root){
        vector<int> l;
        if(root==NULL) {
            l.push_back(0);
            return l;
        }
         queue<TreeNode*>q;
         
         q.push(root);
         while(!q.empty()){
             TreeNode* curr=q.front();
             q.pop();
             if(curr!=NULL){
             l.push_back(curr->val);
             
             
             if(curr->left!=NULL) {
                 q.push(curr->left);
                  
             }
             else if(curr->left==NULL) q.push(NULL);
             if(curr->right!=NULL) {
                 q.push(curr->right);
             }
             else if(curr->right==NULL)q.push(NULL);
             }
             else l.push_back(-1000);
             
         }
         return l;
    }
    vector<int> rightT(TreeNode* root){
        vector<int> l;
        if(root==NULL) {
            l.push_back(0);
            return l;
        }
        queue<TreeNode*>q;
         
         q.push(root);
         while(!q.empty()){
             TreeNode* curr=q.front();
             q.pop();
             if(curr!=NULL){
             l.push_back(curr->val);
             
             
             if(curr->right!=NULL) {
                 q.push(curr->right);
                  
             }
             else q.push(NULL);
             if(curr->left!=NULL) {
                 q.push(curr->left);
             }
             else q.push(NULL);
             }
             else l.push_back(-1000);
         }
         return l;
    }
    
    bool isSymmetric(TreeNode* root) {
        vector<int>res1=leftT(root);
        vector<int>res2=rightT(root);
        if(res1==res2) return true;
        else return false;
    }
};
