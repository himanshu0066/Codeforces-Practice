#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1e15

void solve(){
    ll n,val;
    cin>>n;
    vector<ll> a, b;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val==1)
            a.push_back(i);
        else 
            b.push_back(i);
    }


    ll m=a.size(), k=b.size();
    ll arr[m+1][k+1];
    for(int i=0;i<=k;i++)arr[0][i]=0;
    for(int i=1;i<=m;i++)arr[i][0]=inf;

      for(int i=1;i<=m;i++){
        for(int j=1;j<=k;j++){
            if(j<i)
                arr[i][j]=inf;
            else
                arr[i][j]=min(arr[i-1][j-1]+abs(b[j-1]-a[i-1]),arr[i][j-1]);
        }
    }

   

    cout<<arr[m][k]<<"\n";
    return ;
}

int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}



















    
