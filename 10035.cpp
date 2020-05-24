#include <iostream>
using namespace std;

int main(){
  int a,b,ma,mb,d;
  cin>>a>>b;
  while(a!=0 || b!=0){
    int cont=0;
    int ant = 0;
    for(int i=10; i<=1000000000; i*=10){
      ma = a%i;
      a=a-ma;
      mb = b%i;
      b = b-mb;
      ma = ma/(i/10);
      mb = mb/(i/10);
      if(ma+mb+ant > 9){
	cont++;
	ant=1;
      }
      else ant=0;
    }
    if(cont==0)cout<<"No ";
    else cout<<cont<<" ";
    if(cont<2)cout<<"carry operation.";
    else cout<<"carry operations.";
    cout<<endl;
    cin>>a>>b;
  }
}
