class Solution {
public:
    int lengthOfLastWord(string s) {
      int ans = 0;
      int n = s.length();
      int i = n-1;
      while(s[i] == ' '){
          --i;
      }
      for(; i>=0 ; i--){
          if(s[i] == ' ') break;
          ++ans;
        }
        return ans;  
    }
};