class Solution {
public:
    int climbStairsHelper(int n, vector<int> &dp){
        
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        else{
            if(dp[n]!=-1){
                return dp[n];
            }
            dp[0]=1;
            dp[1]=1;
            dp[n]=climbStairsHelper(n-1,dp)+climbStairsHelper(n-2,dp);
            return dp[n];
        }
        
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return climbStairsHelper(n,dp);
    }
};
