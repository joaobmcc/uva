#include <iostream>
#include <set>
#include <stdio.h>

using namespace std;

int main(){
	set<string>s;
	string aux;
	while(cin>>aux){
		string p="";
		for(int i=0;i<aux.size();i++){
			if((aux[i]>=65 &&aux[i]<=90) || (aux[i]>=97 && aux[i]<=122) ){
				p+=tolower(aux[i]);
			}
			else if(p.size()>0){
				s.insert(p);
				p="";
			}
			if(p.size()>0 && i+1==aux.size())s.insert(p);
		}
	}
	for (auto it=s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
}
