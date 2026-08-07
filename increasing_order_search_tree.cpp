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
    vector<int> v;
    void inorder(TreeNode* root) {
      if(root==NULL) return;
      inorder(root->left);
      v.push_back(root->val);
      inorder(root->right);
    }
    TreeNode* tree() {
      TreeNode* root = new TreeNode(v[0]);
      TreeNode* tmp = root;
      for(int i = 1; i < v.size(); i++) {
        TreeNode* r = new TreeNode(v[i]);
        tmp->right = r;
        tmp = tmp->right;
      }
      return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
      if(root==NULL) return NULL;
      inorder(root);
      return tree();
    }
};