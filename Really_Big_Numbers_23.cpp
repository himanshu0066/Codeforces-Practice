#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll getSum(ll n){
	ll s=0, temp=n;
	while(temp){
		s+=(temp%10);
		temp/=10;
	}
	return n-s;
}

void solve(){
	ll n,k;
	cin>>n>>k;

	ll s=0,e=n+1;
	while(s<e){
		ll mid=(s+e)/2;
		ll sum=getSum(mid);
		if(sum>=k){
			e=mid;
		}else{
			s=mid+1;
		}
	}

	cout<<n-e+1<<"\n";
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