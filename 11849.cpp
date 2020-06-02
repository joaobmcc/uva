#include <iostream>
#include <set>

using namespace std;

int main(){
	int n,m,aux;
	while(cin>>n>>m && n!=0 && n!=0){
		set<int>s;
		while(n--){
			cin>>aux;
			s.insert(aux);
		}
		int cont=0;
		while(m--){
			cin>>aux;
			if(s.find(aux) != s.end())cont++;
		}
		cout<<cont<<endl;
	}
}
