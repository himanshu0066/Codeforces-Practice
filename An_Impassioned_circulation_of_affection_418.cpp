#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	string arr;cin>>arr;

	vector<vector<ll>> dp(26,vector<ll>(n+1,0));

	for(ll k=0;k<26;k++){
		vector<ll> temp;
		for(ll i=0;i<n;i++){
			if(arr[i]==(k+'a'))
				temp.push_back(i);
		}

		ll m=temp.size();
		for(ll i=0;i<m;i++){
			ll cur=0;
			dp[k][0]=max(dp[k][0],(ll)1);
			for(ll j=i+1;j<m;j++){
				cur+=temp[j]-temp[j-1]-1;
				dp[k][cur]=max(dp[k][cur],temp[j]-temp[i]+1);
			}
		}

	}


	for(ll i=0;i<26;i++){
		for(ll j=1;j<=n;j++){
			dp[i][j]=min(max(dp[i][j],dp[i][j-1]+1),n);
		}
	}
     

	ll q;cin>>q;
	for(ll i=0;i<q;i++){
		ll m;cin>>m;
		char c;cin>>c;
		cout<<dp[c-'a'][m]<<"\n";
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