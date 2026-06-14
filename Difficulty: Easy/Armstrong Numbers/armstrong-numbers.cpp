// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int org=n;
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=pow(digit,3);
            n/=10;
        }
        return org==sum;
    }
};