class Solution {
  public:
    void helper(vector<int> &arr,int i,int n){
        if(i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        i++;
        helper(arr,i,n);
    }
    void reverseArray(vector<int> &arr) {
      int n=arr.size();
      helper(arr,0,n);
    }
};