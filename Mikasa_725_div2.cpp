#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n,m;
	cin>>n>>m;
	
	ll s=32;
	while(s>=0){
		ll x=(1<<s);

		if((m&x)==1)
			n^=x;
		s--;
	}

	s=0;

	while(s<=32){

		ll x=(1<<s);
		if((m&x)==0){
			n^=x;
			break;
		}
		s++;
	}
	cout<<n<<"\n";
	return;

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