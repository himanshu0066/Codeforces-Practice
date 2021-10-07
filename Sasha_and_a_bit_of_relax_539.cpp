#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n;cin>>n;
    vector<ll> arr(n+1);
    arr[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]^=arr[i-1];
    }
    unordered_map<ll,ll> emap,omap;
    for(ll i=0;i<=n;i++){
        if(i%2==0)
            emap[arr[i]]++;
        else
            omap[arr[i]]++;
    }

    ll ans=0;

    for(auto i:emap){
        ll x=i.second;
        ans+=(x*(x-1))/2;
    }

    for(auto i:omap){
        ll x=i.second;
        ans+=(x*(x-1))/2;
    }

    cout<<ans<<"\n";



}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 
        solve();
        return 0;
}

