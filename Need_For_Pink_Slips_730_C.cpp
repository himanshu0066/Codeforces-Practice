#include<bits/stdc++.h>
using namespace std;
#define ld long double

ld findAns(ld c, ld m, ld p, ld v, ld steps){

    
    ld ans=steps*p;

    if(c!=0&&m!=0){
        if(c<=v)
            ans+=c*findAns(0,m+(c/2.0),p+(c/2.0),v,steps+1);
        else
            ans+=c*findAns(c-v,m+(v/2.0),p+(v/2.0),v,steps+1);

        if(m<=v)
            ans+=m*findAns(c+(m/2.0),0,p+(m/2.0),v,steps+1);
        else
            ans+=m*findAns(c+(v/2.0),m-v,p+(v/2.0),v,steps+1);
    }else if(c!=0){
        if(c<=v)
            ans+=c*findAns(0,m,p+c,v,steps+1);
        else
            ans+=c*findAns(c-v,m,p+v,v,steps+1);
    }else if(m!=0){
        if(m<=v)
            ans+=m*findAns(c,0,p+m,v,steps+1);
        else
            ans+=m*findAns(c,m-v,p+v,v,steps+1);
    }
    return ans;
}

void solve(){
    ld c,m,p,v;
    cin>>c>>m>>p>>v;
    cout.precision(20);
    cout<<findAns(c,m,p,v,1)<<"\n";
    return;

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



















    
