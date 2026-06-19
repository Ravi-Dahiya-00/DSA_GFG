class Solution {
  public:
    void rotate(vector<int> &arr) {
    int n=arr.size();
    int temp=arr[n-1];
    int prev=arr[0];
    for(int i=0;i<n-1;i++){
        int curr=arr[i+1];
        arr[i+1]=prev;
        prev=curr;
    }
    arr[0]=temp;
    }
};