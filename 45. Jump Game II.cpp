class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;               //farther that we can reach with current jumps count
        int jumps = 0;                      
        int current = 0;
        for(int i = 0 ; i < n -1 ; i++){
            farthest = max(farthest,i+nums[i]);
            if(current == i){
                jumps++;
                current = farthest;
            }
        }
        return jumps;
    }
};