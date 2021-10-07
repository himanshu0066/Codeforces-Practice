#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    ll maxval=0, cur=0;

    for(ll i=0;i<n-1;i+=2){
        if(cur-arr[i]+arr[i+1]>0){
            cur+=arr[i+1]-arr[i];
        }else{
            cur=0;
        }
        maxval=max(maxval,cur);
    }
    cur=0;
    for(ll i=1;i<n-1;i+=2){
        if(cur-arr[i+1]+arr[i]>0){
            cur+=arr[i]-arr[i+1];
        }else{
            cur=0;
        }
        maxval=max(maxval,cur);
    }

    for(ll i=0;i<n;i+=2){
        maxval+=arr[i];
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
















