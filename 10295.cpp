#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,t,b;
	string a,s;
	cin>>n>>m;
	map<string,int>ma;
	while(n--){
		cin>>a>>b;
		ma[a]=b;
	}
	while(m--){
		t = 0;
		while(cin>>s){
			if(s.length() == 1 && s == ".")break;

			auto it = ma.find(s);
			if(it != ma.end())t+= it->second;
		}
		cout<<t<<endl;
	}
}
