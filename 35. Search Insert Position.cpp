class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        auto itr = lower_bound(nums.begin(),nums.end(),target);
        if(itr != nums.end()){
            return itr-nums.begin();
        }else{
            return upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        }
        return -1;
    }
};