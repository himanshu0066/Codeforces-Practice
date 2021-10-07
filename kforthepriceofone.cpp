#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,p,k;
    cin>>n>>p>>k;

    vector<ll> arr(n+1);
    for(ll i=1;i<=n;i++)
        cin>>arr[i];

    sort(arr.begin(),arr.end());
    vector<ll> dp(n+1,0);
    ll maxval=0;
    for(ll i=1;i<=n;i++){
        if(i-k<0)
            dp[i]=dp[i-1]+arr[i];
        else
           dp[i]=min(dp[i-k],dp[i-1])+arr[i];
        
        if(dp[i]<=p)
            maxval=i;
    }

    cout<<maxval<<"\n";
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











