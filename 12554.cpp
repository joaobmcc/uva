#include <iostream>

using namespace std;

int main(){
  int cant,cont,mayor;
  string people[128];
  string song[16]={"Happy","birthday","to","you","Happy","birthday","to","you",
                  "Happy","birthday","to","Rujia","Happy","birthday","to","you"};
  cin>>cant;
  for(int i =0;i<cant;i++){
    cin>>people[i];
  }
  cont=0;
  bool is=false;
  if(cant>16){
    mayor =cant;
    is = true;
  }else mayor=16;
  for(int i =0;i<mayor;i++){
    cout<< people[(i%cant)]<< ": "<< song[cont]<<endl;
    cont = (cont+1)%16;
  }
  if(is){
    int init=0;
    for(int i =cont;i<16;i++){
      cout<< people[init]<< ": "<< song[i]<<endl;
      init++;
    }
  }
  return 0;
}
