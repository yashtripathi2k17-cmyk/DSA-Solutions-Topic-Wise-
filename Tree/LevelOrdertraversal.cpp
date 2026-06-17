// Interview Approach

// I use Breadth First Search (BFS) with a queue.

// First, I push the root node into the queue.

// For each iteration, I calculate the current queue size, which represents the number of nodes present at that level.

// Then I process exactly those nodes, store their values in a temporary vector, and push their children into the queue.

// After processing the entire level, I add the temporary vector to the final answer.

// This continues until the queue becomes empty.

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        // Store final answer level by level
        vector<vector<int>> res;

        // If tree is empty, return empty answer
        if(root == NULL)
            return res;

        // Queue is used for BFS traversal
        queue<TreeNode*> q;
        q.push(root);

        // Process nodes until queue becomes empty
        while(!q.empty()) {

            // Number of nodes present at current level
            int size = q.size();

            // Store all nodes of current level
            vector<int> level;

            // Process exactly 'size' nodes
            for(int i = 0; i < size; i++) {

                // Take front node from queue
                TreeNode* curr = q.front();
                q.pop();

                // Add current node value to current level
                level.push_back(curr->val);

                // Push left child if it exists
                if(curr->left)
                    q.push(curr->left);

                // Push right child if it exists
                if(curr->right)
                    q.push(curr->right);
            }

            // Store current level in final answer
            res.push_back(level);
        }

        return res;
    }
};
