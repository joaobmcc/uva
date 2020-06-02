#include <iostream>
#include <queue>

using namespace std;

struct car{
	int l;
	char d;
}c;
int main(){
	int n,la,m,cant,cont;
	string aux;
	char lugar;
	cin>>n;

	while(n--){
		queue<car>q;
		cin>>la>>m;
		while(m--){
			cin>>c.l;
			cin>>aux;
			if(aux == "left")c.d='l';
			else c.d = 'r';
			q.push(c);
		}
	
		cont = cant = 0;
		lugar = 'l';
		while(!q.empty()){
			if(q.front().d == 'l'){
				if(lugar == 'r'){
					cont++;
					lugar = 'l';
					cant = 0;
				}
				if(cant + q.front().l <= la*100){
					cant += q.front().l;
				}
				else{
					cont+=2;
					cant = q.front().l;
				}
			}
			else{
				if(lugar == 'l'){
					cont++;
					lugar = 'r';
					cant=0;
				}
				if(cant + q.front().l <= la*100){
					cant += q.front().l;
				}
				else{
					cont+=2;
					cant = q.front().l;
				}
			}
			q.pop();

		}
		cont++;
		cout<<cont<<endl;

	}

}
