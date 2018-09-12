int coinChange(vector<int>& v, int target) {
	vector<int> dp(target+1,INT_MAX-1);
	dp[0]=0;
	for(int i=0;i<v.size();i++) for(int j=v[i];j<=target;j++) dp[j]=min(dp[j],dp[j-v[i]]+1);
	return dp[target]==2147483646? -1:dp[target];
}
