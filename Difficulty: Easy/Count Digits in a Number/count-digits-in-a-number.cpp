class Solution {
  public:
    int countDigits(int n) {
        int ans=0;
        while(n>0){
            n=n/10;
            ans++;
        }
        return ans;
    }
};