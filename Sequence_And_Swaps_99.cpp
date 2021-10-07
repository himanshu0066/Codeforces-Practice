#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=998244353;

ll binpow(ll x, ll y){
    ll ans=1;
    while(y>0){
        if(y%2==1)
            ans=(ans*x)%mod;
        x=(x*x)%mod;
        y/=2;
    }
    return ans;
}

ll divide(ll x, ll y){
    return (x*binpow(y,mod-2))%mod;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    vector<ll> fib(n+1);
    fib[0]=0;fib[1]=1;
    for(ll i=2;i<=n;i++)
        fib[i]=(fib[i-1]+fib[i-2])%mod;
    cout<<divide(fib[n],binpow(2,n))<<"\n";
    return 0;
}
















