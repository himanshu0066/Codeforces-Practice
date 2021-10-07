#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,m,M;
    cin>>n>>m;
    M=2*m;

    vector<vector<ll>> dp(M+1,vector<ll>(n+1,0));

    for(ll i=0;i<=n;i++)
        dp[0][i]=1;

    for(ll i=1;i<=M;i++){
        for(ll j=1;j<=n;j++){
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }

    cout<<dp[M][n]<<"\n";
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











