#include <iostream>
using namespace std;

int main(){
  int T,a,b;
  cin >>T;
  for (int i = 1; i<=T; i++){
    cin>>a>>b;
    if(a%2==0)a++;
    if(b%2==0)b--;
    int result = 0;
    
    for(int j = a; j<=b; j+=2){
      result +=j;
    }
    cout<<"Case "<<i<<": "<<result<<endl;
  }
}
	
