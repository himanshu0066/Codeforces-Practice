#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans=0, y, p=1;

    for(ll i=1;i<n;i++){
        p*=2;
        p%=mod;
    }

    if(n%2==1)
        y=p+1;
    else
        y=p-1;

    vector<ll> x(k+1,1);
    for(ll i=1;i<=k;i++){
        x[i]=x[i-1]*y;
        x[i]%=mod;
    }

    p*=2;p%=mod;
    ll z=1;

    for(ll i=k;n%2==0&&i>=1;i--){
        ans+=x[i-1]*z;
        z*=p;
        ans%=mod;
        z%=mod;
    }

    ans+=x.back();
    ans%=mod;
    cout<<ans<<"\n";
    return ;
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
















