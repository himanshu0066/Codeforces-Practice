#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
	ll n;cin>>n;
	vector<ll> arr(n);
	for(ll i=0;i<n;i++)
		cin>>arr[i];

	ll a=abs(arr[1]-arr[0]), b=0;
	ll ans=a;

	for(ll i=1;i<n-1;i++){
		if(i%2==1){
			a=max((ll)0,a-abs(arr[i]-arr[i+1]));
			b+=abs(arr[i]-arr[i+1]);
		}else{
			a+=abs(arr[i]-arr[i+1]);
			b=max((ll)0,b-abs(arr[i]-arr[i+1]));
		}
		ans=max(ans,max(a,b));
	}
	cout<<ans<<"\n";
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