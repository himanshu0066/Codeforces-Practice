#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];

    vector<vector<ll>> dp(n,vector<ll>(2));
    dp[0][0]=arr[0];
    dp[0][1]=arr[0]+k;

    for(ll i=1;i<n;i++){
        dp[i][0]=max(dp[i-1][0]+1-k,arr[i]);
        dp[i][1]=min(dp[i-1][1]-1+k,arr[i]+k-1+k);
        if(arr[i]>=dp[i-1][1]||arr[i]+k-1+k<=dp[i-1][0]){
            cout<<"NO\n";
            return;
        }
    }

    if(dp[n-1][0]==arr[n-1]){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
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
















