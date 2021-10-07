#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
	ll n;cin>>n;
	ll val;
	bool isNegative=false;
	for(ll i=0;i<n;i++){
		cin>>val;
		if(val<0)isNegative=true;
	}

	if(isNegative){
		cout<<"No\n";
	}else{
		cout<<"Yes\n101\n";
		for(ll i=0;i<=100;i++)cout<<i<<" ";
		cout<<"\n";
	}
return ;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}