#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr.begin(),arr.end());
	
	if(n<=2){
		for(int i=0;i<n;i++)cout<<arr[i]<<" ";
			cout<<"\n";
		return ;
	}

	int minval=INT_MAX,index=0;
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]<minval){
			minval=arr[i]-arr[i-1];
			index=i;
		}
	}

	vector<int> sol;
	for(int i=index;i<n;i++){
		sol.push_back(arr[i]);
	}
	for(int i=0;i<index;i++){
		sol.push_back(arr[i]);
	}

	for(int i=0;i<n;i++)cout<<sol[i]<<" ";
		cout<<"\n";
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