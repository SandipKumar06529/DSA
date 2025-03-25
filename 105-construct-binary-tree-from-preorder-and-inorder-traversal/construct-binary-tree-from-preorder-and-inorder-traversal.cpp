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
private:
    unordered_map<int, int> inorderIndexMap;
    int preorderIndex = 0;

    TreeNode* buildSubTree(vector<int>& preorder, int inStart, int inEnd){

        if(inStart>inEnd) return nullptr;

        //get the root value from preorder and then increment the preorderIndex
        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);

        //find the index of root in inorder
        int inIndex = inorderIndexMap[rootVal];

        //Recursively build left and right subtrees
        root->left = buildSubTree(preorder, inStart, inIndex - 1); //(preorder, 0, 0) 
        root->right = buildSubTree(preorder, inIndex + 1, inEnd); // (preorder, 2, 4)

        return root;
    }




public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

    preorderIndex = 0;
    inorderIndexMap.clear();

    for(int i =0; i<inorder.size(); i++){ //inorderIndexMap = {9:0, 3:1, 15:2, 20:3, 7:4}
        inorderIndexMap[inorder[i]]=i;
    }

    return buildSubTree(preorder,0, inorder.size()-1); // (preorder, inStart=0, inEnd = size of inorder)
        
    }
};