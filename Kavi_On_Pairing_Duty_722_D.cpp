#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=998244353;


void solve(){
    int n;
    cin>>n;
    vector<ll> factors(n+1,0), dp(n+1);
    dp[1]=1;
    ll sum=1;

    for(int i=1;i<=n;i++){
        for(int j=0;j+i<=n;j+=i){
            factors[j+i]++;
        }
    }

    for(int i=2;i<=n;i++){
        dp[i]+=factors[i];
        dp[i]+=sum;
        sum+=dp[i];
        sum%=mod;
        dp[i]%=mod;
    }

    cout<<dp[n]<<"\n";
}

int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}



















    
