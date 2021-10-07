#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n,m;
	cin>>n>>m;

	vector<vector<ll>> arr(n,vector<ll>(m+2));
	string s;
	for(ll i=0;i<n;i++){
		cin>>s;
		for(ll j=0;j<m+2;j++){
			arr[i][j]=s[j]-'0';
		}
	}

	ll left=-1, right=1e10, ans=0;

	for(ll i=n-1;i>=0;i--){
		ll ml=0, mr=0;
		for(ll j=0;j<m+2;j++){
			if(arr[i][j]==1)
				mr=j;
			if(arr[i][m+1-j]==1)
				ml=j;
		}
		if(ml!=0){
			ans=min(left+mr+1,right+ml+1);
		}

		ll cur_left=min(left+2*mr,right+m+1)+1;
		ll cur_right=min(right+2*ml,left+m+1)+1;
		left=cur_left;
		right=cur_right;
	}

	cout<<ans<<"\n";
	
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    solve();

	return 0;
}