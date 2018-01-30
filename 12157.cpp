#include <iostream>

using namespace std;

int main(){
  int t,n,ta,tb,total;
  cin>>t;
  total=t;
  while(t--){
    cin>>n;
    ta=tb=0;
    int aux;
    for(int i=0;i<n;i++){
      cin>>aux;
      ta=ta+(aux/30+1)*10;
      tb=tb+(aux/60+1)*15;
    }
    cout<<"Case "<< total-t <<": ";
    if(ta<tb ) cout<<"Mile "<<ta<<endl;
    else if(tb<ta) cout<<"Juice "<<tb<<endl;
    else cout<<"Mile Juice "<<ta<<endl;
  }
  return 0;
} 
