class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int maxi=0;
        int min=INT_MAX;
        for(int price:prices){
            if(price<min){
                min=price;
            }
            maxi=max(maxi,price-min);
        }
        return maxi;
    }
};
