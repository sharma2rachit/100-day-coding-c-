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
    void inOrder(TreeNode* p, vector<int> &v){
        if(p!=NULL) {
            inOrder(p->left,v);
            v.push_back(p->val);
            inOrder(p->right,v);
        }else{
            v.push_back(10000);
        }
    }
     void preOrder(TreeNode* p, vector<int> &v){
        if(p!=NULL) {
             v.push_back(p->val);
            preOrder(p->left,v);
            preOrder(p->right,v);
        }else{
            v.push_back(10000);
        }
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> inp,inq,prep,preq;
        inOrder(p,inp);
        inOrder(q,inq);
        preOrder(p,prep);
        preOrder(q,preq);
            
        if(inp==inq && prep==preq) return true;
        else return false;
    }
};