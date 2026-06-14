class Solution {
  public:
    bool isPrime(int n) {
      if(n<=1) return false;
      int count=0;
      for(int i=1;i<=sqrt(n);i++){
          if(n%i==0) count++;
          if(n/i!=i && n%(n/i)==0){
              count++;
          }
      }
      return (count>2)?false:true;
    }
};
