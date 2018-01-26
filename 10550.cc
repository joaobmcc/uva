#include <iostream>

using namespace std;

int main(){
  int a,b,c,d;
  while(cin>>a>>b>>c>>d, a|b|c|d){
    int degree = 1080;
    int aux=0;
    if(a<b)aux = (40-b)+a;
    else aux= a-b;
    if(b>c)aux+= (40-b)+c;
    else aux+= c-b;
    if(c<d) aux+= (40-d)+c;
    else aux+=c-d;
    degree+= (aux*9);
    cout<< degree << endl;
  }
  return 0;
}
    
