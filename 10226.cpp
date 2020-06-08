#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	int n,cont;
	bool f = true;
	string s;
	cin>>n;
	getchar();
	getchar();
	cout<<fixed;
	cout<<setprecision(4);
	while(n--){
		if(f)f= false;
		else cout<<endl;
		cont = 0;
		map<string,int>m;
		while(getline(cin,s)){

		
			if(s.length()>0){
				cont++;
				auto it = m.find(s);
				if(it != m.end()){
					it->second = it->second +1;
				}
				else m[s]=1;
			}
			else{
				break;
			}
		}
		for(auto i : m){
			cout<<i.first<< " " << (100.0*i.second)/cont <<endl;
		}
	}
}
