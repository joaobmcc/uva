#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int c,n,sum,contM;
  double av;
  cin>>c;
  cout<<fixed;
  cout<<setprecision(3);
  while(c--){
    sum=0;
    contM=0;
    cin>>n;
    int a[n];
    for(int i = 0; i<n;i++){
      cin>>a[i];
      sum+= a[i];
    }
    av = sum/n;
    for(int i = 0; i<n;i++){
      if(a[i]>av)contM++;
    }
    cout<<((double)100/n)*contM<<"%"<<endl;
  }

}
