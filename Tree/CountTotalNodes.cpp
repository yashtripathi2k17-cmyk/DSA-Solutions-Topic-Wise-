// Interview Explanation

// First, I check whether the current node is NULL. If it is NULL, I return 0.

// Otherwise, I recursively count the nodes in the left subtree and store the result in leftcnt.

// Then I recursively count the nodes in the right subtree and store the result in rightcnt.

// Finally, I return 1 + leftcnt + rightcnt, where 1 represents the current node.
class Solution {
  public:
    int countNodes(Node* root) {
        // code here
        if(root==NULL){
            return 0;
        }
        int leftcnt=countNodes(root->left);
        int rightcnt=countNodes(root->right);
        return 1+leftcnt+rightcnt;
    }
};
