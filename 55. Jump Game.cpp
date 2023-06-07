// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int n = nums.size();
//         vector<bool> canreach(n,false);
//         canreach[0] = true;
//         for(int i = 0 ; i < n-1 && canreach[i] ;i++){
//             int jumps = nums[i];
//             for(int j =1 ; j<=jumps && i + j<n ;j++){
//                 canreach[i+j] = true;
//             }
//         }
//         return canreach[n-1];
//     }
// };

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach = 0;
        int n = nums.size();
        for(int i = 0 ; i < n-1 && maxreach >= i ; i++){
            maxreach = max(maxreach,i+nums[i]);
        }
        return (maxreach>=n-1);
    }
};