void helper(TreeNode* root, TreeNode* mn, TreeNode* mx) {
  if(root=NULL)
    return true;
  if(mn!=NULL && root-val<=mn-val)
    return false;
  if(mx!=NULL && root-val>=mx-val)
    return false;
  return helper(root->left, mn, root) && helper(root->right, root, mx);
}

return helper(root, NULL, NULL);