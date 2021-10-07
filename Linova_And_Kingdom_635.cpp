#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

ll dfs(vector<vector<ll>> &tree, ll c, ll p, ll parent, vector<ll> &index){
    ll cnt=0;
    for(ll i=0;i<tree[c].size();i++){
        if(tree[c][i]==p)
            continue;
        cnt+=dfs(tree,tree[c][i],c,parent+1,index);
    }
    index.push_back(parent-cnt);
    return cnt+1;
}

void solve(){
   ll n,k,u,v;
   cin>>n>>k;
   vector<vector<ll>> tree(n+1);
   for(ll i=0;i<n-1;i++){
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
   }

   vector<ll> index;
   dfs(tree,1,0,0,index);
   
   sort(index.begin(),index.end());
   ll ans=0;
   for(ll i=0;i<k;i++){
    ans+=index[n-1-i];
   }
   cout<<ans<<"\n";
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











