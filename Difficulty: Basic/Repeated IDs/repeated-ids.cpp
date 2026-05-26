class Solution {
  public:
    vector<int> uniqueId(vector<int>& arr) {
        unordered_set<int> s;
        vector<int> ans;
        for (int i:arr){
            if(s.find(i)==s.end()){
            ans.push_back(i);
            s.insert(i);
            }
        }
        return ans;
    }
};