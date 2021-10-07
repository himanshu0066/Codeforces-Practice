#include<bits/stdc++.h>
using namespace std;


void solve(){
    unordered_map<long long,long long> m;
    long long int n,val;
    long long int sum=0;
    cin>>n;
    for(long long int i=0;i<n;i++){
        cin>>val;
        sum+=(n-i)*(m[val]);
        m[val]+=i+1;
    }

    cout<<sum<<"\n";
}

int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;cin>>t;

    while(t--)
	solve();
	return 0;
}



















    
