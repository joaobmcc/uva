#include <iostream>

using namespace std;

string generarCadena(int i,int j,int k);
string cambiar(int n);
int main(){
  long m[3][3];
  while(cin>>m[0][0]){
    bool first = true;
    long total=0;
    for (int i=0;i<3;i++){
      for (int j=0;j<3;j++){
	if(first)first = false;
	else cin>>m[i][j];
	total+=m[i][j];
      }
    }

    long temp=-1;
    long mayor=-1;
    string cadena="";
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
	for(int k=0;k<3;k++){
	  if(i!=j && i!=k && j!=k){
	    temp = m[0][i]+m[1][j]+m[2][k];
	    if(mayor<=temp){
	      if(mayor==temp){
		string tmp = generarCadena(i,j,k);
		if(tmp[0]<cadena[0])cadena = tmp;
		else if(tmp[0] == cadena[0] && tmp[1]<cadena[1])cadena=tmp;
	      }
	      else cadena = generarCadena(i,j,k);
	      mayor=temp;
	    }
	  }
	}
      }
    }
    cout << cadena<<" "<<(total-mayor)<<endl;
  }
}

string generarCadena(int i, int j, int k){
  string cadena ="";
  cadena = cambiar(i) + cambiar(j) + cambiar(k);
  return cadena;
}

string cambiar(int n){
  if(n==0)return "B";
  else if(n==1)return "G";
  else return "C";
}
