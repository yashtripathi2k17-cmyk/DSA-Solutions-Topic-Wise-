class Solution {
  public:
    int height(Node* root) {
        
        // Base case:
        // If the tree is empty, height is 0
        if(root == NULL){
            return 0;
        }

        // Recursively find height of left subtree
        int leftheight = height(root->left);

        // Recursively find height of right subtree
        int rightheight = height(root->right);

        // Height of current node =
        // 1 (current node) + maximum of left and right subtree heights
        return 1 + max(leftheight, rightheight);
    }
};
