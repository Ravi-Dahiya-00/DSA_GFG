class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n=arr.size();
        vector<int> hashing(n+1);
        
        for(int i=0;i<n;i++){
            hashing[arr[i]]++;
        }
        return vector<int>(hashing.begin()+1,hashing.end());
    }
};
