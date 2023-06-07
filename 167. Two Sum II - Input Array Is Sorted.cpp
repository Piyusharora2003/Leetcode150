class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start =  0 ;
        int end = numbers.size() - 1;
        // cout<<"Target numbers[start] numbers[end] \n";
        while(start<end){
            // cout<<target<<" "<<numbers[start]<<" "<<numbers[end]<<endl;
            int sum = numbers[start] + numbers[end];
            if(target == sum ){
                return vector<int>{start+1,end+1};
            }else if(target < sum){
                --end;
            }else{
                ++start;
            }
        }
        return vector<int>();
    }
};