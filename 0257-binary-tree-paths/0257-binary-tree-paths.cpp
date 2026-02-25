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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        
        if (!root) return result;

        // If leaf node
        if (!root->left && !root->right) {
            result.push_back(to_string(root->val));
            return result;
        }

        // Left subtree
        vector<string> leftPaths = binaryTreePaths(root->left);
        for (string path : leftPaths) {
            result.push_back(to_string(root->val) + "->" + path);
        }

        // Right subtree
        vector<string> rightPaths = binaryTreePaths(root->right);
        for (string path : rightPaths) {
            result.push_back(to_string(root->val) + "->" + path);
        }

        return result;
    }
};