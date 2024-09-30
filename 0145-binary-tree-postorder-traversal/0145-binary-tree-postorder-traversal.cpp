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
    void postOrder(TreeNode* root, vector<int> &ans) {
        if(root == NULL) return;
        postOrder(root->left, ans);
        postOrder(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        stack<TreeNode*> st1, st2;
        if(root == NULL) return postOrder;
        st1.push(root);
        while(!st1.empty()) {
            root = st1.top();
            st1.pop();
            //everytime while iterating push 1 into stack2 and then check for left and right
            st2.push(root);
            if(root->left != NULL) {
                st1.push(root->left);
            }
            if(root->right != NULL) {
                st1.push(root->right);
            }
        }
        while(!st2.empty()) {
            postOrder.push_back(st2.top()->val);
            st2.pop();
        }
        return postOrder;
    }
};