#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isFree(int x, vector<pair<ll,ll>> arr){
	int n=arr.size();
	for(int i=0;i<n;i++)
		if(arr[i].first==x||arr[i].second==x)
			return false;

	return true;
}

void solve(){

	int n,k;
	cin>>n>>k;
	vector<pair<ll,ll>> points(k);

	for(int i=0;i<k;i++){
		cin>>points[i].first>>points[i].second;
		if(points[i].first>points[i].second)
			swap(points[i].first,points[i].second);
	}

	int free[2*n+1];
	free[0]=0;

	for(int i=1;i<=2*n;i++){
		free[i]=free[i-1];
		if(isFree(i,points))
			free[i]++;
	}
	
	ll cnt=0;
	cnt+=((n-k)*(n-k-1))/2;

	for(int i=0;i<k;i++){
		ll l=points[i].first, r=points[i].second;

		cnt+=min(free[r]-free[l],free[l]+free[2*n]-free[r]);

		for(int j=0;j<k;j++){
			if(i==j)continue;
			int l1=points[j].first, l2=points[j].second;
			if((l1>=l&&l1<=r)&&(!(l2>=l&&l2<=r)))
				cnt++;
		}


	}

	cout<<cnt<<"\n";
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