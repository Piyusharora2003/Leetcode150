class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int itr1=m-1, itr2=n-1, itr=m+n-1;
        while (itr1 !=-1 && itr2!=-1) {
            if (nums1[itr1]>nums2[itr2]){
                nums1[itr]=nums1[itr1];
                --itr1;
            }
            else{
                nums1[itr]=nums2[itr2];
                --itr2;
            }
            --itr;
        }
        while (itr2>=0){
            nums1[itr]=nums2[itr2];
            --itr;--itr2;
        }
    }
};