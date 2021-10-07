#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comparison(vector<ll> &a, vector<ll> &b){
    return (a[0]<b[0]||(a[0]==b[0]&&a[1]<b[1]));
}

void solve(){
    ll n,m,x,z;
    cin>>n>>m;

    vector<vector<ll>> arr;
    z=m*n;
    vector<ll> vals;
    
    for(ll i=0;i<z;i++){
        cin>>x;
        vals.push_back(x);
        arr.push_back({x,i});
    }

    sort(arr.begin(),arr.end(),comparison);
    ll cur=0, ans=0;
    for(ll i=0;i<n;i++){
        vector<ll> temp;
        for(ll j=0;j<m;j++)
            temp.push_back(arr[cur++][1]);
        
        for(ll j=0;j<m;j++){
            for(ll k=0;k<j;k++){
                if(temp[k]<temp[j]&&vals[temp[k]]!=vals[temp[j]])
                    ans++;
            }
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
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
















