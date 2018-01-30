#include <iostream>

using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  while(a!=-1 ){
    int h,l;
    if(a>b){
      h=a;
      l=b;
    }else{
      h=b;
      l=a;
    }
    if((h-l)<(100+l-h)) cout<<(h-l)<<endl;
    else cout<<(100+l-h)<<endl;
  cin>>a>>b;
  }
  return 0;
}
