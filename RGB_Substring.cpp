#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;
    string arr;
    cin>>arr;

    ll r=0, g=0, b=0,c=0;
    string s="RGB";
    ll ans=INT_MAX;
    for(ll i=0;i<3;i++){

        char cur=s[i];
        vector<ll> tmp(n+1,0);
        for(ll j=0;j<n;j++){
            tmp[j+1]=tmp[j];
            if(arr[j]!=cur)
                tmp[j+1]++;

            if(j+1>=k){
                ans=min(ans,tmp[j+1]-tmp[j-k+1]);
            }

            if(cur=='R')cur='G';
            else if(cur=='G')cur='B';
            else cur='R';
        }
        for(ll j=0;j<=n;j++){
            cout<<tmp[j]<<"  ";
        }
        cout<<"\n";
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
        return 0;
}

