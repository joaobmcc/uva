#include <iostream>

#define FOR(a,b) for(a=0;a<b;a++)

using namespace std;

int main(){
  int cont,total;
  cin >> cont;
  total=cont;
  while(cont--){
    int tam, mayor,i, aux;
    cin >>tam;
    mayor=0;	
    FOR(i,tam){
      cin>>aux;
      if(aux>mayor) mayor = aux;
    }
    cout<<"Case "<< total-cont << ": "<<mayor<<endl;
  }
  return 0;
}
