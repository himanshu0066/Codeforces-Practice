#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
void insert(vector<ll> &arr, ll n){
    for(ll i=0;i<n;i++)
        cin>>arr[i];
}


pair<ll,ll> findFinal(string &s, ll x, ll y){
  ll curx=0, cury=0, prevx=0, prevy=0;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='R')
      curx++;
    else if(s[i]=='L')
      curx--;
    else if(s[i]=='U')
      cury++;
    else
      cury--;
    if(curx==x&&cury==y){
      curx=prevx;
      cury=prevy;
    }
    prevx=curx;
    prevy=cury;
  }
  return {curx,cury};
}

void solve(){
   string s;
   cin>>s;

   vector<pair<ll,ll>> pos;
   ll curx=0, cury=0;
   for(ll i=0;i<s.size();i++){
      if(s[i]=='R')
        curx++;
      else if(s[i]=='L')
        curx--;
      else if(s[i]=='U')
        cury++;
      else
        cury--;
      if(curx!=0||cury!=0)
      pos.push_back({curx,cury});
   }

   for(int i=0;i<pos.size();i++){
    pair<ll,ll> fin=findFinal(s,pos[i].first,pos[i].second);
    if(fin.first==0&&fin.second==0){
      cout<<pos[i].first<<" "<<pos[i].second<<"\n";
      return;
    }
   }
   cout<<"0 0\n";
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

