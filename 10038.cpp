#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    int f,s;
    bool *arr = new bool[4096];
    cin>>f;
    bool is =true;
    for(int i=0;i<n-1;i++){
      cin>>s;
      if(abs(f-s)>0 && abs(f-s)<n && !arr[abs(f-s)]) arr[abs(f-s)]=true;
      else is=false;
      f=s;
    }
    if(is)cout<<"Jolly"<<endl;
    else cout<<"Not jolly"<<endl;
  }
  return 0;
}
