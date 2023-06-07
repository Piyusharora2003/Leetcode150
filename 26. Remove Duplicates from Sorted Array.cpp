class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int maxi = nums[0];
        int n = nums.size();
        int i = 1;
        int covered = 1;
        while(covered != n){
            if(nums[covered] > maxi){
                nums[i] = nums[covered];
                ++i;
                maxi = nums[covered];
            }
            ++covered;
        }
        nums.erase(nums.begin()+i,nums.end());
        return i ;
    }
};