// solution Sorting --> O(Nlog(N))
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};


// solution T.C O(n);
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k){
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i<k; i++){
            pq.push(nums[i]);
        }
        for(int i = k; i<n; i++){
                  if (nums[i] > pq.top()) {
                    pq.pop();
                    pq.push(nums[i]);
                  }
                }
	return pq.top();  
    }
};