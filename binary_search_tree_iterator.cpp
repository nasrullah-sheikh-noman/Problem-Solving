stack<TreeNode *> st;

void storeLeftNodes(TreeNode* root) {
  while(root) {
    st.push(root);
    root = root->left;
  }
}

BSTIterator(TreeNode* root) {
  storeLeftNodes(root);
}

int next() {
  TreeNode *ans = st.top();
  st.pop();
  storeLeftNodes(ans->right);
  return ans->val;
}

bool hasNext() {
  return st.size();
}