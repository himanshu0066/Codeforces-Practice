#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void insert(vector<ll> &arr, ll n){
    for(ll i=0;i<n;i++)
        cin>>arr[i];
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(n),c(m);
    insert(a,n);
    insert(b,n);
    insert(c,m);
    vector<ll> ans(m,-1);

    unordered_map<ll,vector<ll>> mp;
    for(ll i=0;i<m-1;i++)
        mp[c[i]].push_back(i);

   ll idx=-1;
   for(ll i=0;i<n;i++){
    if(a[i]!=b[i]&&b[i]==c.back()){
        idx=i+1;
        a[i]=b[i];
        break;
    }
   }

   if(idx==-1){
    for(ll i=0;i<n;i++){
        if(a[i]==b[i]&&b[i]==c.back())
            idx=i+1;
    }
   }

   if(idx==-1){
    cout<<"NO\n";
    return;
   }
   for(ll i=0;i<n;i++){
    if(a[i]!=b[i]){
        if(mp[b[i]].empty()){
            cout<<"NO\n";
            return;
        }else{
            ans[mp[b[i]].back()]=i+1;
            mp[b[i]].pop_back();
        }
    }
   }
   cout<<"YES\n"; 
   for(ll i=0;i<m;i++){
    if(ans[i]==-1)
        ans[i]=idx;
    cout<<ans[i]<<" ";
   }
   cout<<"\n";
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
        return 0;
}

