#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
#define FOR(a,b) for(a=0;a<b;a++)

int main(){
  int cont,total,tam,i,j;
  string n,equals;
  cin>>cont;
  total =cont;
  while(cont--){
    cin>>n>>equals>>tam;
		long arr[tam][tam];
		FOR(i,tam){
			FOR(j,tam){
				cin>>arr[i][j];
			}
		}
		bool is =true;
		FOR(i,tam/2+1){
			FOR(j,tam){
				if( arr[i][j]<0 || arr[i][j] != arr[tam-(i+1)][tam-(j+1)]) {

					is=false;
					break;
				}
			}
			if(!is)break;
		}
		if(is) cout<<"Test #"<< total-cont<<": Symmetric."<<endl;
		else cout <<"Test #"<< total-cont<<": Non-symmetric."<<endl;
	}
  
return 0;
}
			 
