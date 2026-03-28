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
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        
        stack<TreeNode*> st;
        st.push(root);

        int cnt=0;
        
        while(st.empty()==0)
        {
            TreeNode* temp=st.top();
            cnt++;
            st.pop();

            if(temp->right != nullptr) st.push(temp->right);
            
            if(temp->left != nullptr) st.push(temp->left);

        }

        return cnt;
    }
};