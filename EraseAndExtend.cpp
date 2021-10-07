#include<bits/stdc++.h>
using namespace std;

string findMin(string a, string b){
	int n1=a.size(), n2=b.size();
	int n=max(n1,n2);
	int i=0,j=0,k=0;
	while(k<n){
		if((int)a[i]<(int)b[j])
			return a;
		else if((int)a[i]>(int)b[j])
			return b;
		i=(i+1)%n1;
		j=(j+1)%n2;
		k++;
	}
	if(n1<n2)
		return a;
	else
		return b;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	int n,k;
	cin>>n>>k;
	string arr;
	cin>>arr;
	string temp="", ans=arr;

	for(int i=0;i<n;i++){
		temp+=arr[i];
		ans=findMin(temp,ans);
	}

	while(ans.size()<k){
		ans+=ans;
	}
	while(ans.size()>k)
		ans.pop_back();

	cout<<ans<<"\n";

	return 0;

}