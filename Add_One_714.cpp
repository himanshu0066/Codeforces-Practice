#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
vector<ll> dp(2e5+1,0);
void solve(){

    ll n,m;
    scanf("%lld",&n);
    scanf("%lld",&m);
 
    ll ans=0;
    while(n>0){
        ll x=n%10;
        if(m+x-9>=0)
            ans+=dp[m+x-9];
        else
            ans++;
        ans%=mod;
        n/=10;
    }
    printf("%lld\n",ans);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<ll> cur(10,0);
    cur[9]=1;
    dp[0]=1;

    for(ll i=1;i<=2e5;i++){
        ll x=cur[9];
        for(ll j=9;j>=1;j--)
            cur[j]=cur[j-1]%mod;
        cur[0]=x%mod;
        cur[1]=(cur[1]+x)%mod;
        dp[i]=(dp[i-1]+x)%mod;
    }

    int t;
    cin>>t;
    while(t--)
    solve();

    return 0;
}
















