class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            int didswap=0;
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    didswap=1;
                }
            }
            if(didswap==0){
                break;
            }
        }
    }
};