#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n), b(m);

    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    vector<vector<ll>> arr(n);
    
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            arr[i].push_back((a[i]&b[j]));
        }
    }

    ll ans=0;

    for(ll k=8;k>=0;k--){
        bool found=true;
        for(ll i=0;i<n;i++){
            ll x=(1<<k);
            for(ll j=0;j<arr[i].size();j++){
                x&=arr[i][j];
            }
            if(x)
                found=false;
        }
        if(found){
            for(ll i=0;i<n;i++){
                vector<ll> temp;
                ll x=(1<<k);
                for(ll j=0;j<arr[i].size();j++){
                    if((arr[i][j]&x)==0)
                        temp.push_back(arr[i][j]);
                }
                arr[i]=temp;
            }
            ans*=2;
        }else{
            ans=ans*2+1;
        }
        
    }

    cout<<ans<<"\n";
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
















