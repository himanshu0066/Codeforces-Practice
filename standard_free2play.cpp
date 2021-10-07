#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll h,n;
    cin>>h>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    ll ans=0, cur=arr[0];
    for(ll i=0;i<n;i++){
        if(cur<arr[i])
            continue;

        if(cur!=arr[i]){
            ans++;
            cur=arr[i]-1;
        }

        else if(cur==arr[i]){
            if(i+1<n)
                cur=arr[i+1]-1;
            else
                cur=0;
        }
    }
    if(cur!=0)
        ans++;

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
        return 0;
}

