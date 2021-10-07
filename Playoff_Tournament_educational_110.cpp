#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	
	int k;cin>>k;
	int n=pow(2,k);
	string arr;
	cin>>arr;
	arr+="0";
	reverse(arr.begin(),arr.end());

	vector<int> hash(2*n,1);

	for(int i=n-1;i>=1;i--){
		if(arr[i]=='0')
			hash[i]=hash[2*i];
		else if(arr[i]=='1')
			hash[i]=hash[2*i+1];
		else
			hash[i]=hash[2*i]+hash[2*i+1];
	}
	
	//for(int i=1;i<n;i++)cout<<arr[i]<<"   ";cout<<"\n";
	int p, q; char c;
	cin>>q;

	while(q--){
		cin>>p>>c;
		p=n-p;
		arr[p]=c;
		while(p>=1){
			if(arr[p]=='0')hash[p]=hash[2*p+1];
			else if(arr[p]=='1')hash[p]=hash[2*p];
			else hash[p]=hash[2*p]+hash[2*p+1];
			p/=2;
		}
		//for(int i=1;i<2*n;i++)cout<<hash[i]<<"   ";cout<<"\n";
		cout<<hash[1]<<"\n";
	}

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    solve();

	return 0;
}