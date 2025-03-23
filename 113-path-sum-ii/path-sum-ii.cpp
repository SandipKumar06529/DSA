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
    vector<vector<int>>ans;
    vector<int>currentpath;

    void dfs(TreeNode* root, int target){
        if(!root) return;

        currentpath.push_back(root->val);
        target -= root->val;

        if(target==0 &&!root->left && !root->right){
            
            ans.push_back(currentpath);

        }else{
        
        pathSum(root->left, target); 
        pathSum(root->right, target);

        }

        currentpath.pop_back();


    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

       dfs(root, targetSum);
       return ans;

    }
};