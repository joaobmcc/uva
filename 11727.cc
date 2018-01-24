#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int cont,total;
  cin >> cont;
  total=cont;
  int arr[4];
  while(cont--){
    
    cin >>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<"Case "<< total-cont << ": "<<arr[1]<<endl;
  }
  return 0;
}
