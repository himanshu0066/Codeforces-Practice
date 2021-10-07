#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
   vector<ll> dp(n+1,0), prefix(n+1,0);
   dp[1]=1;dp[2]=2;
   prefix[1]=1;prefix[2]=3;

   for(ll i=3;i<=n;i++){
    dp[i]=prefix[i-1];

    ll x1=sqrt(i), x2=x1;
    if(x1*x1==i)
        x1--;

    for(ll j=2;j<=x1;j++){
        if((i/j)>x1)
        dp[i]+=dp[i/j];
    }
    for(ll j=1;j<=x2;j++){
        ll e=i/j, s=(i/(j+1))+1;
        dp[i]+=dp[j]*(e-s+1);
    }
    prefix[i]=prefix[i-1]+dp[i];
    dp[i]%=m;
    prefix[i]%=m;
}
    cout<<dp[n]<<"\n";
    return ;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    solve();
    return 0;
}
















