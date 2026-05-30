class Solution {
  public:
    void updateArray(vector<int>& arr) {
        int stored=1;
        int used=1;
        
        for(int i=0;i<arr.size()-1;i++){
          stored=arr[i];
          arr[i]=used*arr[i]*arr[i+1];
          used=stored;
        }
        int n=arr.size()-1;
        arr[n]=used*arr[n]*1;
    }
};