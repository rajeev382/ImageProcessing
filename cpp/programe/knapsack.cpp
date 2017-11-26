// C++ program to find maximum achievable value
// with a knapsack of weight W and multiple
// instances allowed.
#include<bits/stdc++.h>
using namespace std;
 
// Returns the maximum value with knapsack of
// W capacity
int unboundedKnapsack(int W, int n, int val[], int wt[])
{
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    int dp[W+1];
    memset(dp, 0, sizeof dp);
 
    int ans = 0,ll=0;
 
    // Fill dp[] using above recursive formula
    for (int i=0; i<=W; i++)
      {
	  for (int j=0; j<n; j++)
       {
		  if (wt[j] <= i)
           {
           	ll=dp[i-wt[j]]+val[j];
           	//cout<<"->"<<ll<<" i:"<<i<<" j:"<<j<<" ";
			 dp[i] = max(dp[i], ll);}}
      for(int k=0;k<=W;k++)
           cout<<" "<<dp[k];
		   
		   cout<<endl;}
      cout<<endl;
    return dp[W];
}
 
// Driver program
int main()
{
    int W = 8;
    int val[] = {10,40,50,70};
    int wt[] = {1,3,4,5};
    int n = sizeof(val)/sizeof(val[0]);
 
    cout << unboundedKnapsack(W, n, val, wt);
 
    return 0;
}
