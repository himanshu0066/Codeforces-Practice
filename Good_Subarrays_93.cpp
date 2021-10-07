#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
   ll n;
   cin>>n;
   string str;
   cin>>str;
   unordered_map<ll,ll> mp;
   mp[0]=1;
   ll ans=0, s=0;
   for(ll i=1;i<=n;i++){
        s+=(ll)(str[i-1]-'0');
        ll x=s-i;
        ans+=mp[x];
        mp[x]++;
   }
    cout<<ans<<"\n";
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
















