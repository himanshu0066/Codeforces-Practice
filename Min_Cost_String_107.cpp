#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n,k;
    cin>>n>>k;
    string s="";
    
    for(int i=0;i<k;i++){
        s.push_back('a'+i);
        for(int j=i+1;j<k;j++){
            s.push_back('a'+i);
            s.push_back('a'+j);
        }
    }
    int x=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i%x];
    }
    cout<<"\n";

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
  \
        solve();
}
















