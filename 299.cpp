#include <iostream>

using namespace std;

int main(){
  int N,L,aux;
  cin>>N;
  while(N--){
    cin>>L;
    int a[L+1];
    for(int i=1;i<=L;i++){
      cin>>a[i];
    }
    int cont=0;
    for(int j=L;j>0;j--){
      int ind = 0;
      for(int k = 1;k<j;k++){
	if(ind != 0){
	  cont++;
	  a[k] = a[k+1];
	}
	else if(a[k]==j){
	  ind = k;
	  cont++;
	  a[k] = a[k+1];
	}
      }
    }
    cout<<"Optimal train swapping takes "<<cont<<" swaps."<<endl;
  }
}
