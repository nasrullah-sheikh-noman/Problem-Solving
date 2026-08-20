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
    int maxLevelSum(TreeNode* root) {
      if(!root) return 0;
      queue<TreeNode* > q;
      q.push(root);
      int level= 1, mxsum = INT_MIN, mxlevel = 1;
      while(!q.empty()) {{
        int levelSum = 0;
        int n = q.size();
        for(int i = 0; i <n; i++) {
          TreeNode* par = q.front();
          q.pop();
          levelSum+=par->val;
          if(par->left) q.push(par->left);
          if(par->right) q.push(par->right);
        }
        if(levelSum>mxsum) {
          mxsum = levelSum;
          mxlevel = level;
        }
        level++;
      }}
      return mxlevel;
    }
};