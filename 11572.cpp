#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,x,mayor,cont,inicio,i;
	cin>>n;
	map<int,int>s;
	while(n--){
		cin>>a;
		mayor = 0;
		cont = 0;
		inicio = 0;
		s.clear();
		i=1;
		while(a--){
			cin>>x;
			auto it = s.find(x);
			if(it != s.end()){
				if(it->second > inicio){
					
					cont = (i-1) - inicio;
					inicio = it->second;
					if(mayor<cont)mayor=cont;

					it->second = i;
				}
				else
					it->second = i;
			}
			else{
				s[x]=i;
			}
			i++;
		}

		if((i - inicio -1) > mayor)mayor=i - inicio -1;
		cout<<mayor<<endl;
	}
}
