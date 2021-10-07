#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isCycle(vector<int> &arr, int i, int n, int sum){

	if(n>0&&sum==0)
		return true;

	if(i>=arr.size())
		return false;
	
	return isCycle(arr,i+1,n+1,sum+arr[i])||isCycle(arr,i+1,n+1,sum-arr[i])||isCycle(arr,i+1,n,sum);

}

void solve(){

	int n;cin>>n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)cin>>arr[i];

	if(isCycle(arr,0,0,0)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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
	while(t--)solve();

	return 0;
}