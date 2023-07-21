class Solution {
    bool flag=true;
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int width=q.size();
            vector<int> v(width);
            for(int i=0;i<width;i++){
                TreeNode* temp=q.front();
                q.pop();
                int index=flag?i:width-i-1;
                v[index]=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            flag=!flag;
            ans.push_back(v);
        }
        return ans;
    }
};