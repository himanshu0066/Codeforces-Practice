#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
long long int N=100000000;

void solve(){
	int n;
	cin>>n;
	if(n%2==0){
		int m=log2(n);
		if(pow(2,m)==n){
			if(m%2==0)cout<<"Alice\n";
			else cout<<"Bob\n";
		}
		else if(n!=2)
		    cout<<"Alice\n";
	    else
	    	cout<<"Bob\n";
	}else{
		cout<<"Bob\n";
	}

	return ;
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