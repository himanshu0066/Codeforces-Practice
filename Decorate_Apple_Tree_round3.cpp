#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dfs(vector<vector<ll>> &tree, ll c, ll p, vector<ll> &arr){
	ll x=0;
	for(ll i=0;i<tree[c].size();i++){
		if(tree[c][i]==p)
			continue;
		x+=dfs(tree,tree[c][i],c,arr);
	}
	arr[x]++;
	if(x==0)
		return 1;
	else
		return x;
}

void solve(){
	ll n;cin>>n;
	vector<vector<ll>> tree(n+1);
	ll x;
	for(ll i=0;i<n-1;i++){
		cin>>x;
		tree[i+2].push_back(x);
		tree[x].push_back(i+2);
	}

	vector<ll> arr(n+1,0);
	dfs(tree,1,0,arr);
	arr[1]+=arr[0];


	ll j=1;
	for(ll i=0;i<n;i++){
		if(arr[j]==0){
			i--;
			j++;
		}else{
			cout<<j<<" ";
			arr[j]--;
		}
	}

	cout<<"\n";
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