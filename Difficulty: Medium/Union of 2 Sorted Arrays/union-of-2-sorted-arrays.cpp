class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
       int i=0,j=0;
       int n=a.size(),m=b.size();
       vector<int> temp;
       while(i<n && j<m){
           if(a[i]==b[j]){
               temp.push_back(a[i]);
               while(i<n && a[i]==temp.back()){
                   i++;
               }
               while(j<m && b[j]==temp.back()){
                   j++;
               }
           }
           else if(a[i]>b[j]){
               temp.push_back(b[j]);
                while(j<m && b[j]==temp.back()){
                   j++;
               }
           }
           else{
               temp.push_back(a[i]);
               while(i<n && a[i]==temp.back()){
                   i++;
               }
           }
       }
       
       while(i<n){
           temp.push_back(a[i]);
            while(i<n && a[i]==temp.back()){
                   i++;
               }
       }
       while(j<m){
           temp.push_back(b[j]);
             while(j<m && b[j]==temp.back()){
                   j++;
               }
       }
       return temp;
    }
};