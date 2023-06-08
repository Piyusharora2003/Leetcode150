class Solution {
public:
    int trailingZeroes(int n) {
        // trailing zeroes would be no of times five occurs;
        int count = 0;
        int maxpower = 5; // 5,25,125,625,3125,15xxx
        for(int i = 1; i < 6 ; i++){
            count+=( n/pow(5,i) );
        }
        return count;
    }
};