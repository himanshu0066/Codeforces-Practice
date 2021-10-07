#include<bits/stdc++.h>
using namespace std;


void solve(){
    priority_queue<long long,vector<long long>,greater<long long>> q;

    int n;cin>>n;
    long long val, health=0, count=0;

    for(int i=0;i<n;i++){

        cin>>val;
        if(val>0){
            health+=val;
            count++;
        }else{
            if(val+health<0&&!q.empty()&&q.top()<val){
                health+=val-q.top();
                q.pop();
                q.push(val);
            }else if(val+health>=0){
                health+=val;
                q.push(val);
                count++;
            }
        }

    }

    cout<<count<<"\n";
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



















    
