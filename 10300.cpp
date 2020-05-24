#include <iostream>
using namespace std;

int main(){
  int n,f,a,b,c;
  cin>>n;
  while(n--){
    cin>>f;
    int result=0;
    while(f--){
      cin>>a>>b>>c;
      result+= (a*c);
    }
    cout<<result<<endl;
  }
}
