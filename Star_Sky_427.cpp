#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
   ll n,q,c;
   cin>>n>>q>>c;

   ll dp[11][101][101];
   memset(dp,0,sizeof dp);

   ll x,y,s;
   for(ll i=0;i<n;i++){
    cin>>x>>y>>s;
    dp[s][x][y]++;
   }

   for(ll i=0;i<11;i++){
    for(ll j=1;j<=100;j++){
        for(ll k=1;k<=100;k++){
            dp[i][j][k]+=dp[i][j-1][k]+dp[i][j][k-1]-dp[i][j-1][k-1];
        }
    }
   }

   ll t,x1,y1,x2,y2;
   for(ll i=0;i<q;i++){
    cin>>t>>x1>>y1>>x2>>y2;

    ll ans=0;
    for(ll i=0;i<=c;i++){
        ans+=((i+t)%(c+1))*(dp[i][x2][y2]-dp[i][x2][y1-1]-dp[i][x1-1][y2]+dp[i][x1-1][y1-1]);
    }

    cout<<ans<<"\n";

   }


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    solve();
    return 0;
}

