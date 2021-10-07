#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

ll ncr(ll n, ll r){
    ll num=1, den=1;
    for(ll i=1;i<=r;i++)
        den*=i;
    for(ll j=n-r+1;j<=n;j++)
        num*=j;
    return num/den;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr={1,0,1,2,9};
    ll ans=0;
    for(ll i=0;i<=k;i++){
        ans+=ncr(n,i)*arr[i];
    }

    cout<<ans<<"\n";
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

