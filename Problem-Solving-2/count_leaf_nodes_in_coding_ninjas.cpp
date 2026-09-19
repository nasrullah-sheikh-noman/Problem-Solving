/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
int cnt(BinaryTreeNode<int> *root) {
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    int l = cnt(root->left);
    int r = cnt(root->right);
    return l+r;
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    return cnt(root);
}

