#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve(){
    int n;
    string arr;
    map<pair<int,int>, int> m;
    cin>>n>>arr;
    int d=0, k=0;

    for(int i=0;i<n;i++){
        if(arr[i]=='D')d++;
        else k++;
        int g=gcd(d,k);
       
       cout<<++m[{d/g,k/g}]<<" ";

    }

    cout<<"\n";

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



















    
