#include <iostream>

using namespace std;

int main(){
  int cont,aux;
  string in;
  int money=0;
  cin>>cont;
  while(cont--){
    cin>>in;
    if(in =="donate"){
      cin>>aux;
      money+=aux;
    }else{
      cout<<money<<endl;
    }
  }
  return 0;
}
