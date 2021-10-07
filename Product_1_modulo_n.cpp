#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

void solve(){
   ll n;
   cin>>n;

   vector<bool> arr(n,false);
   ll prod=1;
   for(ll i=1;i<n;i++){
        if(gcd(i,n)==1){
            prod=(prod*i)%n;
            arr[i]=true;
        }
   }

   if(prod!=1)
        arr[prod]=false;

    cout<<count(arr.begin(),arr.end(),true)<<"\n";
    for(ll i=1;i<n;i++){
        if(arr[i])
            cout<<i<<" ";
    }
    cout<<"\n";
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
















