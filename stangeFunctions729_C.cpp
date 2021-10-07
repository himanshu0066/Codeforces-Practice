#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=1000000007;

ll gcd(ll a, ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return (a*b)/gcd(a,b);
}

void solve()
{
  long long int n;
  cin>>n;
  ll left=n, m=1,count=0;
  for(int i=1;left>0;i++){
  		ll possible=(n/m)-(n/lcm(m,i));
  		m=lcm(m,i);
  		count+=i*possible;count%=mod;
  		left-=possible;
  }

cout<<count<<"\n";

}

int main()
{
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