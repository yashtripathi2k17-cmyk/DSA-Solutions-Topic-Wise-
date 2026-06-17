class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return NULL;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

// Interview Approach

// Say:

// "For every node, I swap its left and right child. Then I recursively apply the same operation to the left and right subtrees. The base case is when the node is NULL."
