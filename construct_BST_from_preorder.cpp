TreeNode* helper(vector<int>& preorder, int& i, int bound) {
  if(i>=preorder.size() || preorder[i] >= bound)
    return;
  TreeNode *root = new TreeNode(preorder[i++]);
  root->left = helper(preorder, i, root->val);
  root->right = helper(preorder, i, bound);
  return root;
}

int i = 0;
return helper(preorder, i, INT_MAX);