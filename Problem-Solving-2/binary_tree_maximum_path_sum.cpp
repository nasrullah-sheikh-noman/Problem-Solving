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
    int ans = INT_MIN;
    int helper(TreeNode* root) {
      if(!root) return 0;
      int leftsum = max(helper(root->left), 0);
      int rightsum = max(helper(root->right), 0);
      ans = max(ans, leftsum+rightsum+root->val);
      return max(leftsum, rightsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
      helper(root);
      return ans;
    }
};