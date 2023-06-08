// class Solution {/**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */




// better
private:
    void inorder(TreeNode* root, int k, int &count, int &ans){
        if(root == NULL) return ;
        inorder(root->left,k,count,ans);
        count+=1;
        cout<<"root value ="<<root->val<<" count ="<<count<<endl;
        if(count == k){
            ans = root->val;
            return;
        }
        inorder(root->right,k,count,ans);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans = 0;
        inorder(root,k,count,ans);
        return ans;
    }




// optimal
private:
    void inorder(TreeNode* root, int k, int &count, int &ans){
        if(root == NULL) return ;
        if(ans != -1) return;
        inorder(root->left,k,count,ans);
        count+=1;
        // cout<<"root value ="<<root->val<<" count ="<<count<<endl;
        if(count == k){
            ans = root->val;
            return;
        }
        inorder(root->right,k,count,ans);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans = -1;
        inorder(root,k,count,ans);
        return ans;
    }
