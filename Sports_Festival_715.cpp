#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    vector<ll> ans(n);
    ans[0]=arr[0];

    vector<vector<ll>> minMax(2,vector<ll>(n));
    vector<vector<ll>> prefix(2,vector<ll>(n));
    minMax.push_back({arr[0],arr[0]});
    prefix.push_back({arr[0],arr[0]});

    ll sz=1, cur=0;

    for(ll i=1;i<n;i++){
        ll curmin=cur+max(arr[i],minMax[1][i-1])-min(arr[i],minMax[0][i-1]);
        ll s=0, index=i;
        for(ll j=i-1;j>0;j--){
            s+=max(0,arr[i]-minMax[1][j])+max(0,minMax[0][j]-arr[i]);
            if(cur+s+max(arr[i],minMax[1][j-1])-min(arr[i],minMax[0][j-1])<)
        }

    }

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
















