#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n,k;
	cin>>n>>k;
	ll arr[n+1];

	for(int i=1;i<=n;i++)
		cin>>arr[i];

	ll len=max((ll)1,n-500);
	ll maxval=-1e9;

	for(ll i=len;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			maxval=max(maxval,i*j-k*(arr[i]|arr[j]));
		}
	}

	cout<<maxval<<"\n";

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