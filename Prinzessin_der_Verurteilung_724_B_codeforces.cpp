#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> possible,s1,s2,s3;
vector<char> alpha;
void find(string s){
    
    if(s.size()>=3)return ;
    
    for(int i=0;i<26;i++){
        s+=alpha[i];
        if(s.size()==1)s1.push_back(s);
        else if(s.size()==2)s2.push_back(s);
        else if(s.size()==3)s3.push_back(s);
        find(s);
        s.pop_back();
    }
    
    return ;
    
}


void solve(){
    int n;cin>>n;
    string arr,ans="aaaab";cin>>arr;
    
    int m=s1.size();
    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j<n;j++){
            if(arr.substr(j,1)==s1[i])found=true;
        }
        if(!found){cout<<s1[i]<<"\n";return ;}
    }
    
    m=s2.size();
    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j+1<n;j++){
            if(arr.substr(j,2)==s2[i])found=true;
        }
        if(!found){cout<<s2[i]<<"\n";return ;}
    }
    
    m=s3.size();
    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j+3<n;j++){
            if(arr.substr(j,3)==s3[i])found=true;
        }
        if(!found){cout<<s3[i]<<"\n";return ;}
    }
    
return ;

}

int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    for(int i=0;i<26;i++)alpha.push_back((char)('a'+i));
    string temp="";
    find(temp);
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    
    
    
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}



















    
