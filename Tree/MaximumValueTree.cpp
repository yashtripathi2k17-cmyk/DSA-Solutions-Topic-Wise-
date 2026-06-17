class Solution {
public:
    int findMax(Node* root) {

        if(root == NULL)
            return INT_MIN;

        int leftMax = findMax(root->left);
        int rightMax = findMax(root->right);

        return max(root->data, max(leftMax, rightMax));
    }
};
