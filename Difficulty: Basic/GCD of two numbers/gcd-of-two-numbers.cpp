class Solution {
  public:
    int gcd(int a, int b) {
        while(a!=0){
            int remainder=b%a;
            b=a;
            a=remainder;
        }
        return b;
    }
};
