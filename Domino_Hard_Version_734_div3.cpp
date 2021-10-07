#include<bits/stdc++.h>
using namespace std;

char nextCh(char ch){
	if(ch=='z')return 'a';
	ch=(char)(ch+1);
	return ch;
}

void checkVer(int i, int j, char &ch, vector<vector<char>> &arr){
	char ch1=(i-1>=0)?arr[i-1][j]:'0';
	char ch2=(j-1>=0)?arr[i][j-1]:'0';
	char ch3=(j-1>=0)?arr[i+1][j-1]:'0';
	while(ch==ch1||ch==ch2||ch==ch3)
		ch=nextCh(ch);
	return ;
}

void checkHor(int i, int j, char &ch, vector<vector<char>> &arr){
	char ch1=(i-1>=0)?arr[i-1][j]:'0';
	char ch2=(j-1>=0)?arr[i][j-1]:'0';
	char ch3=(i-1>=0)?arr[i-1][j+1]:'0';
	while(ch==ch1||ch==ch2||ch==ch3)
		ch=nextCh(ch);
	return ;
}

void solve(){
	int n,m,h;
	cin>>n>>m>>h;
	int v=(n*m)/2-h;
	vector<vector<char>> arr(n,vector<char>(m));

	int tn=n, tm=m, th=h, tv=v;
	if(n%2==1){tn--;
		th-=(m/2);
	}
	if(m%2==1){tm--;
		tv-=(n/2);
	}

	if(th<0||tv<0||th%2==1||tv%2==1){
		cout<<"NO\n";
		return ;
	}

	char ch='a';
	int i=0, j=0;


	while(th>0){
		    checkHor(i,j,ch,arr);
			arr[i][j]=ch;arr[i][j+1]=ch;
			checkHor(i+1,j,ch,arr);
			arr[i+1][j]=ch; arr[i+1][j+1]=ch;
			th-=2;
			j+=2;
			if(j>=tm){
				i+=2;
				j=0;
			}
	}

	while(tv>0){

		checkVer(i,j,ch,arr);
		arr[i][j]=ch;arr[i+1][j]=ch;
		checkVer(i,j+1,ch,arr);
		arr[i][j+1]=ch;arr[i+1][j+1]=ch;
		tv-=2;
		j+=2;
		if(j>=tm){
			i+=2;
			j=0;
		}

	}

	if(n%2==1){
		for(int i=0;i<m;i+=2){
			checkHor(n-1,i,ch,arr);
			arr[n-1][i]=ch;
			arr[n-1][i+1]=ch;
		}
	}

	if(m%2==1){
		for(int i=0;i<n;i+=2){
			checkVer(i,m-1,ch,arr);
			arr[i][m-1]=ch;
			arr[i+1][m-1]=ch;
		}
	}

	cout<<"YES\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<arr[i][j];
		cout<<"\n";
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
	while(t--)solve();

	return 0;
}