class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapp;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            // checks if the other present in the previous iteration
            if(mapp[target - nums[i]] != 0){
                vector<int> ans = {i,mapp[target - nums[i]]-1};
                return ans;
            }
            // insert in mapp
            mapp[nums[i]] = i+1;            
            // cout<<"map value of : "<<nums[i]<<" = "<<i+1<<endl;
        }
        // will never reach here !!
        return nums;
    }
};