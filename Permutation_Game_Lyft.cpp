#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,m;
    cin>>n;
    vector<ll> arr(n);
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]=i;
    }

    vector<bool> ans(n,false); 

    for(ll i=n;i>0;i--){
      ll idx=mp[i];

      for(ll j=idx;j<n;j+=i){
        if(arr[j]>arr[idx]&&ans[j]==false)
          ans[idx]=true;
      }

      for(ll j=idx;j>=0;j-=i){
        if(arr[j]>arr[idx]&&ans[j]==false)
          ans[idx]=true;
      }

    }

    for(ll i=0;i<n;i++){
      if(ans[i])
        cout<<"A";
      else
        cout<<"B";
    }
    cout<<"\n";
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

  