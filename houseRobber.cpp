#include<bits/stdc++.h>
int solveUsingMem(vector<int> houses,int index,vector<int>&dp){
	if(index>=houses.size()) return 0;

	if(dp[index]!=-1) return dp[index];

	int include=houses[index]+solveUsingMem(houses,index+2,dp);
	int exclude=0+solveUsingMem(houses,index+1,dp);
	dp[index]=max(include,exclude);
	return dp[index];
}
int solveUsingTabulation(vector<int>& nums){
	int n=nums.size();
	vector<int>dp(n,-1);
	dp[n-1]=nums[n-1];
	for(int index=n-2;index>=0;index--){
		int tempAns=0;
		if(index+2<n){
			tempAns=dp[index+2];
		}
		int include=nums[index]+tempAns;
		int exclude=0+dp[index+1];
		dp[index]=max(include,exclude);
	}
	return dp[0];
}
int maxMoneyLooted(vector<int> &houses, int n)
{
	int index=0;
	vector<int>dp(n,-1);
	//int ans=solveUsingMem(houses,index,dp)
	int ans=solveUsingTabulation(houses);
	return ans;
}
