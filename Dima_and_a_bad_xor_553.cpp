#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> arr(n,vector<ll>(m));

    for(ll i=0;i<n;i++)for(ll j=0;j<m;j++)cin>>arr[i][j];

    ll y=0;
    for(ll i=0;i<n;i++)
        y^=arr[i][0];

    if(y!=0){
        cout<<"TAK\n";
        for(ll i=0;i<n;i++)
            cout<<"1 ";
        cout<<"\n";
        return;
    }

    ll i=0,j=0;
    bool found=false;
    for(;i<n;i++){
        j=0;
        for(;j<m-1;j++){
            if((arr[i][j]^arr[i][j+1])!=0){
                found=true;
                break;
            }
        }
        if(found)
            break;
    }

    if(found){
        cout<<"TAK\n";
        ll x=0;
        for(ll i1=0;i1<n;i1++){
            if(i1!=i)
                x^=arr[i1][0];
        }
        for(ll i1=0;i1<n;i1++){
            if(i1==i){
                if((x^arr[i][j])!=0)
                    cout<<j+1<<" ";
                else
                    cout<<j+2<<" ";
            }else{
                cout<<"1 ";
            }
        }
        cout<<"\n";
    }
    else{
        cout<<"NIE\n";
    }
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

