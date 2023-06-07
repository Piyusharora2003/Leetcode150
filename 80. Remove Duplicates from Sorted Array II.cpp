class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // upper_bound(arr.begin(),arr.end(),4)-lower_bound(arr.begin(),arr.end(),4) <--gives count 
        int index = 0;
        int i = 0 ;
        while(i<nums.size()){
            int elem = nums[i];
            cout<<"The index , i , elem are : "<<index<<" "<<i<<" "<<elem<<"\n";
            // finding count using binary search
            int count = upper_bound(nums.begin()+i,nums.end(),elem)-lower_bound(nums.begin()+i,nums.end(),elem);
            nums[index] = elem;
            ++index;
            if(count>1){
                nums[index] = elem;
                ++index;
            }
            i+=count;
        }
        return index;
    }
};

// iswalnum(ch1) <-- checks if alphanumeric or not