class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0 ;
        int end = s.length()-1;
        while(start<=end){
            while(!iswalnum(s[start]) && start<=end) start++;
            while(!iswalnum(s[end]) && start<=end) end--;
            if(start <= end){
                if((tolower(s[start]) == tolower(s[end])) == false){
                    cout<<"wrong case "<< s[start]<<' '<<s[end]<<endl;
                    return false;
                } 
                start++;end--;
            }
        }
        return true;
    }
};