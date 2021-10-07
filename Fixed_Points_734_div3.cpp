#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n,k;
	cin>>n>>k;

	ll arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	ll dp[n+1][n+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++)
		dp[i][j]=0;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(arr[i-1]==j)
				dp[i][j]=max(dp[i-1][j-1]+1,dp[i-1][j]);
			else
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
		}
	}
	



	int ans=-1;
	for(int i=0;i<=n;i++){
		if(dp[n][i]>=k){
			ans=n-i;
		}
	}
	cout<<ans<<"\n";
	return ;
	
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--)solve();

	return 0;
}