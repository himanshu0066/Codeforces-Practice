#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> ans;
    if(n%2==1){
        n--;
        k--;
        cout<<"1 ";
    }

    while(k>3){
        cout<<"1 1 ";
        n-=2;
        k-=2;
    }

    if(k==2){
        cout<<n/2<<" "<<n/2<<"\n";
    }else{
        if(n%4!=0){
            cout<<n/2-1<<" "<<n/2-1<<" 2\n";
        }else{
            cout<<n/4<<" "<<n/4<<" "<<n/2<<"\n";
        }
    }

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

