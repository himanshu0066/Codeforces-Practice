#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,x=0;
    cin>>n;
    vector<int> arr(n), in(n,-1), out(n,-1), ans(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];arr[i]--;
        if(in[arr[i]]==-1){
            x++;
            out[i]=arr[i];
            in[arr[i]]=i;
            ans[i]=arr[i];
        }
    }
    vector<int> emp, empin, empout;
    for(int i=0;i<n;i++){
        if(in[i]==-1&&out[i]==-1){
            emp.push_back(i);
        }else if(in[i]==-1){
            empin.push_back(i);
        }else if(out[i]==-1){
            empout.push_back(i);
        }
    }
    
    for(int i=0;i<empout.size()&&i<empin.size();i++){
        out[empout[i]]=empin[i];
    }
    
    if(emp.size()==1){
        out[emp[0]]=arr[emp[0]];
        out[in[out[emp[0]]]]=emp[0];
    }else if(emp.size()>1){
        for(int i=0;i<emp.size()-1;i++){
            out[emp[i]]=emp[i+1];
        }
        out[emp.back()]=emp[0];
    }
    cout<<x<<"\n";
    for(int i=0;i<n;i++){
        cout<<out[i]+1<<" ";
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
















