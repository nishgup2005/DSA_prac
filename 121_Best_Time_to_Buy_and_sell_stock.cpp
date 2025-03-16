class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProf=0;
        int min=prices[0];
        
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            if(prices[i]-min>maxProf){
                maxProf=prices[i]-min;
            }
        }
        return maxProf;
    }
};
