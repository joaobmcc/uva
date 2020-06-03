#include <iostream>
#include <queue>
using namespace std;

int main(){
	int c,n,t,m;
	cin>>c;
	int cant,cont,aux;
	string auxq;
	char lado;
	bool first = true;
	while(c--){
		if(first){
			first=false;
		}
		else cout<<endl;
		cin>>n>>t>>m;
		queue<int>ql;
		queue<int>qr;
		queue<int>indl;
		queue<int>indr;
		queue<int>q;
		int a [m];
		cant=cont=0;
		lado = 'l';
		for(int i = 0; i<m; i++){
			cin>>aux>>auxq;
			if(auxq == "left"){
				ql.push(aux);
				indl.push(i);
			}
			else {
				qr.push(aux);
				indr.push(i);
			}
		}
		while(!ql.empty() || !qr.empty()){
			if(ql.empty() && lado == 'l'){
				lado = 'r';
				if (cant==0 && cont<qr.front())cont = qr.front();
				cont+=t;
				while(cant>0){
					a[q.front()] = cont;
					q.pop();
					cant--;
				}
				
			}
			else if(qr.empty() && lado == 'r'){
				lado = 'l';
				if(cant == 0 && cont < ql.front())cont = ql.front();
				cont+=t;
				while(cant>0){
					a[q.front()] = cont;
					q.pop();
					cant--;
				}
			}
			else if(!ql.empty() && !qr.empty() && cant== 0){
				if(lado == 'l'){
					if(ql.front() <= qr.front() || ql.front()<= cont){
						if(cont<ql.front())cont = ql.front();
						cant++;
						q.push(indl.front());
						indl.pop();
						ql.pop();
					}
					else {
						lado = 'r';
						if(cont<qr.front())cont = qr.front();
						cont+=t;
					}
				}
				if(lado == 'r'){
					if(qr.front() <= ql.front() || qr.front()<= cont){
						if(cont < qr.front())cont = qr.front();
						cant++;
						q.push(indr.front());
						indr.pop();
						qr.pop();
					}
					else {
						lado = 'l';
						if(cont<ql.front())cont = ql.front();
						cont+=t;
					}
				}
			}
						
			else if(!ql.empty() && lado =='l'){
				if(cant == 0){
					if(cont<ql.front())cont = ql.front();
					cant++;
					q.push(indl.front());
					indl.pop();
					ql.pop();
				}
				else if(cant<n && cont >= ql.front()){
					cant++;
					q.push(indl.front());
					indl.pop();
					ql.pop();
				}
				else{
					cont+=t;
					lado = 'r';
					while(cant>0){
						a[q.front()] = cont;
						q.pop();
						cant--;
					}
				}
			}
			else if(!qr.empty() && lado == 'r'){
				if(cant == 0){
					if(cont<qr.front()) cont = qr.front();
					cant++;
					q.push(indr.front());
					indr.pop();
					qr.pop();
				}
				else if(cant<n && cont >= qr.front()){
					cant++;
					q.push(indr.front());
					indr.pop();
					qr.pop();
					
				}
				else{
					cont += t;
					lado = 'l';
					while(cant>0){
						a[q.front()] = cont;
						q.pop();
						cant--;
					}
				}
			}
		}
		cont+=t;
		while(cant>0){
			a[q.front()] = cont;
			q.pop();
			cant--;
		}
		for (int i = 0; i<m; i++ ) cout<<a[i]<<endl;
	}
}
