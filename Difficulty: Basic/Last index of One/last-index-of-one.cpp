class Solution {
  public:
    int lastIndex(string s) {
        int found=-1;
        int index=0;
        char target='1';
        for(char c:s){
            if(c==target){
                found=index;
            }
            index++;
        }
        return found;
    }
};