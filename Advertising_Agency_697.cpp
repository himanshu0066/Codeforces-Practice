#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
void insert(vector<ll> &arr, ll n){
    for(ll i=0;i<n;i++)
        cin>>arr[i];
}

ll gcd(ll a, ll b){

  while(b){
    a=a%b;
    swap(a,b);
  }
  return a;
}

ll ncr(ll n,ll r){
  vector<ll> num, den;
  for(ll i=0;i<r;i++)
    num.push_back(n-i);
  

  for(ll i=2;i<=r;i++)
    den.push_back(i);

  for(ll i=0;i<num.size();i++){
    for(ll j=0;j<den.size();j++){
      if(den[j]==1)
        continue;
      ll g=gcd(num[i],den[j]);
      num[i]/=g;
      den[j]/=g;
    }
  }

  ll ans=1;
  for(ll i=0;i<num.size();i++){
    ans=(ans*num[i])%mod;
  }
  return ans;

}

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> arr(n);
    insert(arr,n);
    sort(arr.begin(),arr.end());

    ll x1=n-k,x2=n-k;
    for(ll i=n-k;i<n;i++){
      if(arr[i]==arr[n-k])
        x2=i;
    }

    for(ll i=n-k;i>=0;i--){
      if(arr[i]==arr[n-k])
        x1=i;
    }
    x2++;
    cout<<ncr(x2-x1,k-n+x2)<<"\n";
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

