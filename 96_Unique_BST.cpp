class Solution {
public:
    int numTrees(int n) {
        //works on catalan numbers

        vector<int> dp(n+1,0);
        //initialization 
        dp[0]=1;
        dp[1]=1;

        for(int i = 2; i<=n; i++){
            //for each c[i]
            for(int j=0; j<i; j++){
                //c[j].c[(i-1)-j]
                dp[i]=dp[i]+(dp[j]*dp[i-j-1]);
            }
        }
        return dp[n];
    }
};
