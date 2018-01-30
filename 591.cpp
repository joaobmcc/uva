#include <iostream>

using namespace std;

int main(){
  int cant,set;
  cin>>cant;
  set=1;
  while(cant!=0){
    int sum=0;
    int *arr = new int[64];
    for(int i=0;i<cant;i++){

      cin>>arr[i];
      sum+=arr[i];
    }
    int avg = sum/cant;
    int cont=0;
    for(int i=0;i<cant;i++){
      if(arr[i]>avg) cont+= (arr[i]-avg);
    }
    cout<<"Set #"<<set<<endl;
    cout<< "The minimum number of moves is "<< cont<<"."<<endl;
    cout<<endl;
    set++;
    cin>>cant;
  }
  return 0;
}
