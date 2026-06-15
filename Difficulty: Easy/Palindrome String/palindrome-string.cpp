class Solution {
  public:
    bool helper(int i,string &s){
        if(i>=s.size()) return true;
        if(s[i]!=s[s.size()-i-1]) return false;
        return helper(i+1,s);
    }
    bool isPalindrome(string& s) {
        bool ans=helper(0,s);
        return ans;
    }
};