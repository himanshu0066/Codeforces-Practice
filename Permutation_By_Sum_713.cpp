#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,l,r,s;
    cin>>n>>l>>r>>s;
    ll x=abs(r-l)+1;
    ll minval=(x*(x+1))/2, maxval=n*x-(x*(x-1))/2;

    if(s<minval||s>maxval){
        cout<<"-1\n";
        return;
    }
    
    vector<ll> ans;
    for(ll i=1;i<=x;i++)ans.push_back(i);

    ll j=x-1, end=n, cur=(x*(x+1))/2;
    while(j>=0&&cur!=s){
        if(cur+end-ans[j]<s){
            cur+=end-ans[j];
            ans[j]=end--;
        }else{
            ans[j]+=s-cur;
            cur=s;
        }
        j--;
    }

    vector<ll> temp;j=0;

    for(ll i=1;i<=n;i++){
        if(ans[j]==i)
            j++;
        else
            temp.push_back(i);
    }

    for(ll i=1;i<=n;i++){
        if(i>=l&&i<=r){
            cout<<ans.back()<<" ";
            ans.pop_back();
        }else{
            cout<<temp.back()<<" ";
            temp.pop_back();
        }
    } 
    cout<<"\n";
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
















