#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int a, b,c,d,e,f;
    cin>>a>>b;
    if(a<b)
        swap(a,b);

    c=a-b;

    if(c==0||a%c==0){
       cout<<c<<" 0\n";
        return ;
    }

    d=a/c;

    e=min(a-c*(d-1), c*(d+1)-a);
    cout<<c<<" "<<e<<"\n";
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



















    
