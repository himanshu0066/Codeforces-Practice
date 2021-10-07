#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n;
    vector<ll> c(n),x(n),y(n);
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
    vector<ll> dp(n);
    ll maxval=0;
    dp[0]=0;

    for(ll i=1;i<n;i++){
        ll a=min(x[i],y[i]), b=max(x[i],y[i]);

        if(a==-1||b==-1)
            dp[i]=0;
        else if(dp[i-1]==0||a==b)
            dp[i]=2+b-a;
        else
            dp[i]=2+max(b-a,dp[i-1]+a-1+c[i-1]-b);

        maxval=max(maxval,dp[i]+c[i]-1);
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
}
















