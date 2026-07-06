class Solution {
  public:
    
    int fun(int mid,int n,int m){
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans*=mid;
            if(ans>m) return 2;
        }
        if(ans==m) return 1;
        return 0;
    }
    int nthRoot(int n, int m) {
        if (n == 1) return m;
        if (m == 0) return 0;
        if (m == 1) return 1;
        int low=1,high=m;
        while(low<=high){
            int mid=(low+high)/2;
            int comp=fun(mid,n,m);
            if(comp==1){
                return mid;
            }
            else if(comp==2){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};