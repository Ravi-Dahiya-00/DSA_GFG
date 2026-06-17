class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                swap(arr[start],arr[i]);
                start++;
            }
        }
    }
};