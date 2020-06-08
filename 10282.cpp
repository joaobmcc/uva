#include <bits/stdc++.h>

using namespace std;

int main(){
	string a,b,s,k,v;
	map<string,string>m;

	while(true){
		getline(cin,s);
		if(s.length() == 0)break;
		stringstream st(s);
		st>>v;
		st>>k;
		m[k] = v;
	}

	while(cin>>s){
		auto it = m.find(s);
		if(it != m.end()){
			cout<<it->second<<endl;
		}
		else cout<<"eh"<<endl;
	}
}
