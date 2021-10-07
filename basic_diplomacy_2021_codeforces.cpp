#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,m,x,y;
    cin>>n>>m;
    unordered_map<ll,ll> freq;
    vector<ll> pos(m,0);
    vector<vector<ll>> arr(m);

    for(ll i=0;i<m;i++){
        cin>>y;
        for(ll j=0;j<y;j++){
            cin>>x;
            arr[i].push_back(x);
        }
        sort(arr[i].begin(),arr[i].end());
        freq[arr[i][0]]++;
    }

    ll lim=(m/2);
    if(m%2==1)
        lim++;

    for(ll i=0;i<m;i++){
        if(freq[arr[i][pos[i]]]>lim){
            freq[arr[i][pos[i]]]--;
            pos[i]=arr[i].size()-1;
            freq[arr[i][pos[i]]]++;
        }
    }

    for(auto i:freq){
        if(i.second>lim){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
    for(ll i=0;i<m;i++){
        cout<<arr[i][pos[i]]<<" ";
    }
    cout<<"\n";
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

