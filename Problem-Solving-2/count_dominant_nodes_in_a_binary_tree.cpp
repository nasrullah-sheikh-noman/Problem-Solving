
class Solution {
public:
  int ans = 0;
  int dfs (TreeNode* tmp) {
    if(!tmp) return INT_MIN;
    int le = dfs(tmp->left);
    int ri = dfs(tmp->right);
    int sub = max(tmp->val, max(le, ri));
    if(tmp->val == sub) ans++;
    return sub;
  }
    int countDominantNodes(TreeNode* root) {
      TreeNode* tmp = root;
      dfs(tmp);
      return ans;
    }
};