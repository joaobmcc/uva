#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,aux;
	long cont;
	cin>>n;
	multiset<int>s;
	multiset<int>::iterator iti;
	multiset<int>::iterator itf;
	while(n != 0){
		cont=0;
		s.clear();
		while(n--){
			cin>>k;
			while(k--){
				cin>>aux;
				s.insert(aux);
			}
			iti = s.begin();
			itf = s.end();
			itf--;
			cont += (*itf - *iti);
			s.erase(iti);
			s.erase(itf);
		}
		cout<<cont<<endl;
		cin>>n;
	}
}
