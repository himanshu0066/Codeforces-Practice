#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    string ans="";
    ans.push_back('(');

    ll curzero=0, curone=0;

    for(ll i=1;i<n-1;i++){
        if(s[i]=='0'){
            if(curzero%2==0)
                ans.push_back('(');
            else
                ans.push_back(')');
            curzero++;
        }else{
            if(curone%2==0)
                ans.push_back('(');
            else
                ans.push_back(')');
            curone++;
        }
    }
    ans.push_back(')');

    if(curzero%2==1||s[0]=='0'||s.back()=='0'){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<ans<<"\n";

    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            if(ans[i]==')')
                ans[i]='(';
            else
                ans[i]=')';
        }
    }
    cout<<ans<<"\n";
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











