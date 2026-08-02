#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    bool freq[3007] = {false};
    queue<pair<TreeNode<int>*, int>> q;
    if(root) q.push({root, 1});
    while(!q.empty()) {
        pair<TreeNode<int>*, int> p = q.front();
        q.pop();
        TreeNode<int>* node = p.first;
        int level = p.second;
        if(freq[level]==false) {
            ans.push_back(node->data);
            freq[level] = true;
        }
        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
    return ans;
}
