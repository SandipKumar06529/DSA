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

    void dfs(TreeNode* root, int target, int sum){
        
        if(!root) return;

        currentpath.push_back(root->val);
        sum += root->val; 

        if(sum == target &&!root->left && !root->right){ // check if the current path sum == target and path end node is leaf 
            
            ans.push_back(currentpath);  // both condition satisfy then add it to ans 

        }else{
        
        dfs(root->left, target, sum); 
        dfs(root->right, target, sum);

        }

        currentpath.pop_back(); // backtracking


    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum =0; 
        
        dfs(root, targetSum, sum);
        return ans;
    }
};