#include <iostream>

using namespace std;

int f(int n);
int main(){
  int i,j,a,in,fin;
  while(cin>>i>>j){
    int mayor = 0;
    if(i> j){
      in = j;
      fin = i;
    }
    else{
      in = i;
      fin = j;
    }

    for (int x = in; x<=fin; x++){
      a = f(x);
      if(a > mayor) mayor = a;
    }
    cout<<i<<" "<<j<<" "<<mayor<<endl;
  }
}

int f(int n){
  int cont = 1;
  while(n!=1){
    if(n%2 == 0)n= n/2;
    else n = (3 * n)+1;
    cont++;
  }
  return cont;
}

