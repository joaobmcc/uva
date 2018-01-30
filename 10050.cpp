#include <iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int *cal= new int[4096];
    int p,n;
    cin>>n;
    cin>>p;
    while(p--){
      int aux,cont;
      cin>>aux;
      cont=aux;
      while(aux<=n){
	if(aux%7!=6 && aux%7!=0) cal[aux]=5;
  	aux+=cont;
      }
    }
    int lose =0;
    for(int i=0;i<=n;i++){
      if(cal[i]==5)lose++;

    }
    cout<<lose<<endl;

  }
  return 0;
}

