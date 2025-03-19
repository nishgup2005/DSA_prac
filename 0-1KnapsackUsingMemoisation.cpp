int maxProfitHelper(vector<int> &cost, vector<int> &wt, int n, int w, vector<vector<int>> &dp){
	if(n==0||w==0){
		return 0;
	}
	if(dp[n][w]!=-1){
		return dp[n][w];
	}
	else{
		if(wt[n-1]<=w){
			int ans1=cost[n-1]+maxProfitHelper(cost,wt,n-1,w-wt[n-1],dp);
			int ans2=maxProfitHelper(cost,wt,n-1,w,dp);
			dp[n][w]=max(ans1,ans2);
			return dp[n][w];
		}
		else{
			dp[n][w]=maxProfitHelper(cost,wt,n-1,w,dp);
		}
	}
}



int maxProfit(vector<int> &cost, vector<int> &wt, int n, int w)
{	
	vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
	for(int i=0;i<n+1;i++){
		dp[i][0]=0;
	}
	for(int i=0;i<w+1;i++){
		dp[0][i]=0;
	}
	return maxProfitHelper(cost,wt,n,w,dp);
	// Write your code here
}
