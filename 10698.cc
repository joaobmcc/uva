#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;

#define FOR(a,b) for(a=0;a<b;a++)
#define SZ(v) v.size()

string convm(string a){
	int i;	
	int tam = SZ(a);
	string res ="";
	FOR(i,tam){
		if(a[i]>='A' && a[i]<='Z') res+=a[i]-('Z'-'z');
		else res+=a[i];
	}	
	return res;
}

struct estadistica{
	string nombre;
	int partidoJugado;
	int puntaje;
	int golesFavor;
	int golesContra;
	estadistica(const string &n){
		nombre = n;
		puntaje = partidoJugado = golesFavor = golesContra = 0;
	}
	estadistica(){
		estadistica(string("NO name"));
	}
};

struct comp{
	bool operator()(const estadistica &a, const estadistica &b){
		if( a.puntaje > b.puntaje) return true;
		if( a.puntaje < b.puntaje ) return false;
		int difA = a.golesFavor-a.golesContra;
		int difB = b.golesFavor-b.golesContra;
		if( difA > difB ) return true;
		if( difA < difB ) return false;
		if( a.golesFavor > b.golesFavor) return true;
		if( a.golesFavor < b.golesFavor) return false;
		return convm(a.nombre) < convm(b.nombre);	
	}
} mycomp;

bool equals(const estadistica &a, const estadistica &b){
	int difA = a.golesFavor-a.golesContra;
	int difB = b.golesFavor-b.golesContra;
	if(a.puntaje==b.puntaje && difA == difB && a.golesFavor == b.golesFavor) return true;
	return false;
}


int main(){

  int ne, np, i,s1,s2;
	string e1,e2,guion;
	bool firstLine =true;
	while (cin>>ne>>np, ne|np){
		if(firstLine)firstLine=false;
		else puts("");
		map<string,estadistica> me;
		vector<estadistica> ve;
		FOR(i,ne)	{
			cin>>e1;
			me[e1] = estadistica(e1);
		} 
		FOR(i,np) {
			cin>>e1>>s1>>guion>>s2>>e2;
			me[e1].partidoJugado++;
			me[e2].partidoJugado++;	
			me[e1].golesFavor+=s1;
			me[e1].golesContra+=s2;	
			me[e2].golesFavor+=s2;
			me[e2].golesContra+=s1;
				
			if( s1<s2 ) {
				me[e2].puntaje+=3;
				
			} else if(s1>s2) {
				me[e1].puntaje+=3;
			} else {
				me[e1].puntaje++;
				me[e2].puntaje++;
			}
		}
		for(map<string,estadistica>::const_iterator iter=me.begin();iter!=me.end();iter++){
			ve.push_back(iter->second);
		}

		sort(ve.begin(), ve.end(), mycomp);

		FOR(i,SZ(ve)){
			double por;
			char pos[8];
			if(i>0){

				if(equals(ve[i],ve[i-1])) strcpy(pos,"   ");
				else sprintf(pos,"%2d.",i+1);
			}else strcpy(pos," 1.");			
			if(ve[i].partidoJugado>0){
			por = ve[i].puntaje? ((ve[i].puntaje*100.0)/(ve[i].partidoJugado*3.0)):0;
				if(por == 100.00) printf("%s %15s %3d %3d %3d %3d %3d %.2lf\n",pos,ve[i].nombre.data(), ve[i].puntaje, ve[i].partidoJugado,ve[i].golesFavor, ve[i].golesContra, ve[i].golesFavor-ve[i].golesContra, por);
				else if(por > 9.99) printf("%s %15s %3d %3d %3d %3d %3d  %.2lf\n",pos,ve[i].nombre.data(), ve[i].puntaje, ve[i].partidoJugado,ve[i].golesFavor, ve[i].golesContra, ve[i].golesFavor-ve[i].golesContra, por);
				else printf("%s %15s %3d %3d %3d %3d %3d   %3.2f\n",pos,ve[i].nombre.data(), ve[i].puntaje, ve[i].partidoJugado,ve[i].golesFavor, ve[i].golesContra, ve[i].golesFavor-ve[i].golesContra, por);
			}

			else{

			printf("%s %15s %3d %3d %3d %3d %3d    N/A\n",pos,ve[i].nombre.data(), ve[i].puntaje, ve[i].partidoJugado,ve[i].golesFavor, ve[i].golesContra, ve[i].golesFavor-ve[i].golesContra);}
		
		
		}

	}
			
		
return 0;
}
