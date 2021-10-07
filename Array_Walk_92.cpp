#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k,z;
    cin>>n>>k>>z;
    vector<int> a(n),arr;
    for(int i=0;i<n;i++)
        cin>>a[i];
    arr=a;
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }

    int maxval=arr[0];

    for(int i=1;i<n;i++){
        if(i>k)
            continue;
        else if(2*z>k-i){
            int p=k-i;
            int cur=(p/2)*(a[i]+a[i-1]);
            if(p%2==1)cur+=a[i-1];
            maxval=max(maxval,arr[i]+cur);
        }else{
            maxval=max(maxval,z*(a[i]+a[i-1])+arr[k-2*z]);
        }
        maxval=max(maxval,arr[i]);
    }

    cout<<maxval<<"\n";
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
















