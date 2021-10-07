#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> possible;

void findPossible(){
	
	for(int i=0;i<26;i++){
		possible.push_back((char)('a'+i));
	}

	for(int i=0;i<26;i++){
		string s=(char)('a'+i);
		for(int j=0;j<26;j++){
			possible.push_back(s+(char)('a'+j));
		}
	}

	for(int i=0;i<13;i++){
		string s=(char)('a'+i);
		for(int j=0;j<26;j++){
			s+=(char)('a'+j);
			for(int k=0;k<26;k++){
				possible.push_back(s+(char)('a'+k));
			}
		}
	}

} 

bool isPresent(string arr, string s){

	int n=arr.size(), m=s.size();
	for(int i=0;i+m-1<n;i++){
			    bool ans=true;
				for(int j=0;j<m;j++){
					if(s[j]!=arr[i+j])ans=false;
				}
				if(ans)return ans;
		
	}
	return false;

}

void solve(){
	int n;cin>>n;
	string arr;
	cin>>arr;

	for(int i=0;i<1001;i++){
		if(!isPresent(arr,possible[i])){
			cout<<possible[i]<<"\n";
			return ;
		}
	}

return ;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
	findPossible();

	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}