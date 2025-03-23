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
    vector<vector<int>>ans; // if currentpath sum == target and it is a leaf  then only add it to ans
    vector<int>currentpath; // store the current path 

    void dfs(TreeNode* root, int target){
        if(!root) return;

        currentpath.push_back(root->val); // add current node
        target -= root->val;

        if(target==0 &&!root->left && !root->right){ // if target ==0 and current node is leaf then only add currentpath to ans;
            
            ans.push_back(currentpath);

        }else{                              // if not check left and right nodes
        
        pathSum(root->left, target); 
        pathSum(root->right, target);

        }

        currentpath.pop_back();             // backtracking ( go back if current node is already checked )


    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

       dfs(root, targetSum);  // call dfs function 
       return ans;

    }
};