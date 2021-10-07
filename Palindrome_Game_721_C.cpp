#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string arr;cin>>arr;

    int i=0, j=n-1, mismatch=0, zero=0;

    for(int i=0;i<n;i++){
        if(arr[i]=='0')zero++;
    }

    while(i<j){
        if(arr[i]!=arr[j])mismatch++;
        i++;
        j--;
    }


    if(mismatch==0){
        if(n%2==1&&arr[n/2]=='0'&&zero>1)
            cout<<"ALICE\n";
        else 
            cout<<"BOB\n";
    }else{
        if(mismatch==1&&n%2==1&&arr[n/2]=='0'&&zero==2)
            cout<<"DRAW\n";
       else cout<<"ALICE\n";
    }

return ;

}

int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;cin>>t;
    while(t--)	solve();
	return 0;
}



















    
