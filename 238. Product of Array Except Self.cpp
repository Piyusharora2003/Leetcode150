class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n =  nums.size();
        vector<int> suf(n,1);
        vector<int> pre(n,1);
        pre[0] = nums[0];
        suf[n-1] = nums[n-1];
        for(int i = 1 ; i < n ; i++){
            pre[i] = pre[i-1]*nums[i];
            // int end = n-1-i
            suf[n-1-i] = suf[n-i]*nums[n-i-1];
        }
        vector<int> ans(n,1);
        ans[0] = suf[1];
        ans[n-1] = pre[n-2];
        for(int i = 1 ; i<n-1 ;i++){
            ans[i] = pre[i-1]*suf[i+1];
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n =  nums.size();
        // vector<int> suf(n,1);
        // vector<int> pre(n,1);
        int pre = 1;
        int suf = 1;
        // pre[0] = nums[0];
        // suf[n-1] = nums[n-1];

        vector<int> ans(n,1);
        for(int i = 0 ; i < n ; i++){
            // pre[i] = pre[i-1]*nums[i];
            // int end = n-1-i
            ans[i]*=pre;
            pre*=nums[i];

            // suf[n-1-i] = suf[n-i]*nums[n-i-1];
        }
        // ans[0] = suf[1];
        // ans[n-1] = pre[n-2];
        for(int i = n-1 ; i>=0 ;i--){
            ans[i] *=suf;
            suf*=nums[i];
        }
        return ans;
    }
};