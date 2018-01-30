#include <iostream>

using namespace std;

int main(){
  int t,total;
  cin>>t;
  total=t;
  while(t--){
    int arr[10];
    string www[10];
    int mayor=0;
    for(int i=0;i<10;i++){
      cin>>www[i]>>arr[i];
      if(arr[i]>mayor) mayor=arr[i];
    }
    cout<<"Case #"<<total-t<<":"<<endl;
    for(int i=0;i<10;i++){
      if(arr[i]==mayor) cout<<www[i]<<endl;
    }
  }
  return 0;
}
