int recurse(TreeNode *root){
    if(root==NULL) return 0;
    return 1+max(recurse(root->left),recurse(root->right));
}    

int maxDepth(TreeNode* root) {
    return recurse(root);
}
