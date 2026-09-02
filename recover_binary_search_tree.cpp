TreeNode *prev = NULL;
TreeNode *first = NULL;
TreeNode* second = NULL:


void inorder(TreeNode* root) {
  if(!root)
    return;
  inorder(root->left);
  if(prev && prev->val > root->val) {
    if(!first)
      first = prev;
    second = root;
  }
  prev = root;
  inorder(root->right);
}

inorder(root);
int tmp = first->val;
first->val = second->val;
second->val = tmp;
