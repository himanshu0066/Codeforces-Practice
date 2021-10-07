#include<bits/stdc++.h>
using namespace std;
void solve(){

	long long int n,val;
	cin>>n;
	vector<long long int>arr;
	for(int i=0;i<n;i++){
		cin>>val;
		arr.push_back(val);
	}
	sort(arr.begin(),arr.end());
	long long int count=0;
	for(long long int i=1;i<n;i++){
		count+=arr[i]-arr[i-1];
		count-=(arr[i]-arr[i-1])*i*(n-i);
	}

	cout<<count<<"\n";
	return ;
}

using namespace std;

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