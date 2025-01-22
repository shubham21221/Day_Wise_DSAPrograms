// https://leetcode.com/problems/search-in-a-binary-search-tree/description/

class Solution{
    public:
    Node* SearchBST(TreeNode* root, int val){
        //base case
        if(root == NULL ) return NULL;
        if(root->val == val){
            return root;
        }else if(root->left > val){
            return SearchBST(root->left, val);
        }else{
            return SearchBST(root->right, val);
        }

    }
};