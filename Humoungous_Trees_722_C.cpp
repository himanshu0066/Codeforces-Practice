#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100001
vector<int> tree[N];
pair<int,int> vals[N];
long long int dp[100001][2];

long long int max(long long int a, long long int b){
    if(a>b)return a;
    return b;
}



void dfs(int v, int p){
   for(auto u:tree[v]){
    if(u!=p){
        dfs(u,v);
        dp[v][0]+=(long long)max(abs(vals[v].first-vals[u].first)+dp[u][0], abs(vals[v].first-vals[u].second)+dp[u][1]);
        dp[v][1]+=(long long)max(abs(vals[v].second-vals[u].first)+dp[u][0], abs(vals[v].second-vals[u].second)+dp[u][1]);
    }
   }
   
}

void solve(){
    
    int n,x,y;
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        dp[i][0]=0;
        dp[i][1]=0;
        tree[i].clear();
        scanf("%d%d",&x,&y);
        vals[i]={x,y};
    }

    for(int i=1;i<n;i++){
        scanf("%d%d",&x,&y);
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

     dfs(1,0);
     printf("%lld\n",max(dp[1][0],dp[1][1]));
    
 return ;
}

int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;cin>>t;
    while(t--)
	solve();
	return 0;
}



















    
