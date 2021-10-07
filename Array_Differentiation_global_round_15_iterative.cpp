#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int z=1;
	for(int i=0;i<n;i++)z*=3;

	for(int i=1;i<z;i++){
		int x=i;
		int tmp=0;
		for(int j=0;j<n;j++){
			if(x%3==1)tmp+=arr[j];
			if(x%3==2)tmp-=arr[j];
			x/=3;
		}
		if(tmp==0){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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