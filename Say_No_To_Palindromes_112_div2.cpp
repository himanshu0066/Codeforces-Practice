#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

	int n,m;
	cin>>n>>m;

	string s;
	cin>>s;

	vector<string> str={"abc","acb","bac","bca","cab","cba"};

	vector<vector<int>> dp(6,vector<int>(n+1,0));

	for(int i=0;i<6;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=dp[i][j-1];
			if(s[j-1]!=str[i][(j-1)%3])
				dp[i][j]++;
		}
	}


	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		int minval=INT_MAX;

		for(int j=0;j<6;j++)
			minval=min(minval,dp[j][r]-dp[j][l-1]);
		cout<<minval<<"\n";
	}

	return;

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	solve();

	return 0;
}