class Solution {
private:
    int weight(TreeNode* root, int &maxsum){
        if(root == NULL) return 0;
        int leftweight  = max(0,weight(root->left,maxsum));
        int rightweight = max(weight(root->right,maxsum),0);
        maxsum = max(maxsum,rightweight+leftweight+root->val);
        return max(leftweight, rightweight) + root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxsum = root->val;
        int ans = weight(root,maxsum);
        return maxsum;
    }
};

// here in this question we have to find the path in the binary tree with the maximum sum 
// we assume if the node is NULL , its weight (sum of max values it can give from the way below it , including self) to be 0;
// suppose a tree       1->2,1->3,3->4,3->-10  the weight of 2 = 2 and 3 = weight of path weights max( max weight attained 
// from left or right 3 would return 7 (3+4))  1 would return  1+ max(2,7) = 8
// but this is not thte ans the ans is stored in another variable maxsum 
// shown in line 7 
