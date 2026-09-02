int prev = 0;

if(root==NULL)
  return -1;
if(root->left) {
  int leftAns = KthSmallest(root->left, k);
  if(leftAns)
    return leftAns;
}
if(prev+1==k)
  return root->val;
prev++;
if(root->right) {
  int rightAns = KthSmallest(root->right, k);
  if(rightAns)
    return rightAns;
}
return -1;
