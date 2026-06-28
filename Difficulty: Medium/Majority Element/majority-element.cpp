class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int element=-1;
        for(int i=0;i<n;i++){
            if(count==0){
                element=arr[i];
                count=1;
            }
            else if(element==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(element==arr[i]){
                cnt++;
            }
        }
        
        return (cnt>n/2)?element:-1;
    }
};