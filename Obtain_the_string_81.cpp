#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s,t;
    cin>>s>>t;
    int n=s.size(), m=t.size();
    vector<vector<int>> dp(n+1,vector<int>(26,n));

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<26;j++){
            if(j==(int)(s[i]-'a')){
                dp[i][j]=i;
            }else{
                dp[i][j]=dp[i+1][j];
            }
        }
    }

    int ans=1, cur=0;

    for(int i=0;i<m;i++){
        cur=dp[cur][t[i]-'a'];
        if(cur==n){
            if(dp[0][t[i]-'a']==n){
                cout<<"-1\n";
                return;
            }
            cur=dp[0][t[i]-'a'];
            ans++;
        }
        cur++;
    }

    cout<<ans<<"\n";
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
















