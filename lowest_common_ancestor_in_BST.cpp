if(!root)
  return NULL;
if(root->val>l->val && root->val>r->val)
  return lowestCommonAncestor(roo->left, l, r);
else if(root->val<l->val && root->val<r->val)
  return losestCommonAncestor(root->right, l, r);
else
  return root;