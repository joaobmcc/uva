#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n,la,m,cant,cont,auxint;
	string aux;
	char lugar;
	cin>>n;

	while(n--){
		queue<int>ql;
		queue<int>qr;
		cin>>la>>m;
		while(m--){
			cin>>auxint;
			cin>>aux;
			if(aux == "left")ql.push(auxint);
			else qr.push(auxint);
		}
	
		cont = cant = 0;
		lugar = 'l';
		while(!ql.empty() ||  !qr.empty()){
			if(lugar == 'l'){
				if(ql.empty()){
					cont++;
					cant = 0;
					lugar = 'r';
				}
				else{
					if(cant + ql.front() <= la*100){
						cant += ql.front();

						ql.pop();
					}
					else {
						cont++;
						cant = 0;
						lugar = 'r';
					}
				}
			}
			else{
				if(qr.empty()){
					cont++;
					cant = 0;
					lugar = 'l';
				}
				else{
					if(cant + qr.front() <= la*100){
						cant += qr.front();

						qr.pop();
					}
					else{
						cont++;
						cant = 0;
						lugar = 'l';
					}
				}
			}
		}
		cont++;
		cout<<cont<<endl;
	}
}
