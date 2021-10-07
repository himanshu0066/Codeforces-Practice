#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;cin>>n;
    ll n1=0, n2=0, cur=0;
    while(n){
        ll x=n%10, p=cur/2;
        if(cur%2==0){
            n1+=x*pow(10,p);
        }else{
            n2+=x*pow(10,p);
        }
        n/=10;
        cur++;
    }

    cout<<((n1+1)*(n2+1))-2<<"\n";
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
















