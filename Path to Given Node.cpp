/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool solveU(TreeNode* A, int B,vector<int>&ans){
     if(!root)
     return false;
     
     ans.push_back(root->val);

     if(root->val == B)
     return true;

     if(solveU(A->left,B,ans) || solveU(A->right,B,ans))
     return true;

     ans.pop_back();
     return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    bool res = (solveU(A,B,ans))
    return ans;
}
