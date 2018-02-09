#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n, n!=0){
    int cont,cont2,suma,f,c;
    int arr[128][128];
    cont=0;
    for(int i=0;i<n;i++){
      suma=0;
      for(int j=0;j<n;j++){
	cin>>arr[i][j];
	suma+=arr[i][j];
      }
      if(suma%2==1){cont++;f=i;}
    }
    if(cont<2){
      cont2=0;
      for(int i=0;i<n;i++){
        suma=0;
        for(int j=0;j<n;j++){
	  suma+=arr[j][i];
	}
	if(suma%2==1){cont2++;c=i;}
      }
      if(cont==0 && cont2==0)cout<<"OK"<<endl;
      else if( cont==1 && cont2==1 )cout<< "Change bit ("<<f+1<<","<<c+1<<")"<<endl;
      else cout<<"Corrupt"<<endl;
    }else cout<<"Corrupt"<<endl;
  }
  return 0;
}
     
