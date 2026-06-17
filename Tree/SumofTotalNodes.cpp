
// */
// Sum of Tree
// =
// Sum of Left Subtree
// +
// Sum of Right Subtree
// +
// Current Node Value
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root==NULL){
            return 0;
        }
        int leftsum=sumBT(root->left);
        int rightsum=sumBT(root->right);
        return root->data+leftsum+rightsum;
    }
};
