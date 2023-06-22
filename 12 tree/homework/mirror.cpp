#inc
class Solution {
    public:
     bool isSameTree(TreeNode* p, TreeNode* q) {
        if(q==NULL&&p==NULL)
            return true;
        if(q==NULL || p==NULL)
            return false;
           if(q->val!=p->val)
                return false;
        return (isSameTree(p->left,q->right)&&isSameTree(p->right,q->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;

        return isSameTree(root->left,root->right);

    }
};