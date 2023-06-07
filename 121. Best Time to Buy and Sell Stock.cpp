class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxonright(n,-1);
        for(int i = n-2 ; i>=0 ; i--){
            maxonright[i] = max(prices[i+1],maxonright[i+1]); 
        }
        maxonright[n-1] = 1e5;
        vector<int> minarray(n,-1);
        minarray[0] = prices[0];
        for(int i = 1 ; i <n ;i++){
            minarray[i] = min(minarray[i-1],prices[i]);
        }
        
        int maxprofit = 0 ;
        for(int i = 0 ; i < n-1 ; i++){
            int profit = maxonright[i] - minarray[i];
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;

    }
};