#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans=1, totLeft=n, totRight=0;
    vector<ll> dpLeft(n,1), dpRight(n,0);

    for(ll i=1;i<k;i++){
        totRight=0, totLeft=0;

        for(ll j=0;j<n;j++){
            totLeft+=dpLeft[j];
            totLeft%=mod;
        }

        for(ll j=0;j<n;j++){
            ans=(ans+dpLeft[j]+dpRight[j])%mod;
            ll x=dpLeft[j], y=dpRight[j];
            dpLeft[j]=totRight%mod;
            dpRight[j]=(totLeft-x)%mod;
            totRight=(totRight+y)%mod;
            totLeft=(totLeft-x)%mod;
        }
    }
    while(ans<0)ans+=mod;

    cout<<ans<<"\n";
    return;

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
}
















