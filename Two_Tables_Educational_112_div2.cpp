#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	
	ll W,H,x1,y1,x2,y2,w,h;
	cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;

	ll ans=INT_MAX;
	ll zero=0;
	if(W>=w+(x2-x1)){
		ans=min(ans,max(zero,w-x1));
		ans=min(ans,max(zero,x2-(W-w)));
	}

	if(H>=h+(y2-y1)){
		ans=min(ans,max(zero,y2-(H-h)));
		ans=min(ans,max(zero,h-y1));
	}

	if(ans==INT_MAX){
		cout<<"-1\n";
	}else{
		cout<<(double)(ans)<<"\n";
	}


}

int main(){

	cout<<fixed<<setprecision(9);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--)solve();

	return 0;
}