class Solution {
  public:
    int largest(vector<int> &arr) {
     int high=arr[0];
     for(int i=1;i<arr.size();i++){
         if(arr[i]>high) high=arr[i];
     }
     return high;
    }
};
