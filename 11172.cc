#include <iostream>

using namespace std;

int main(){
  int cont;
  cin >> cont;
  long a, b;
  while(cont--){
    
    cin >>a>>b;
    if(a>b) cout<< ">"<<endl;
    else if(a<b) cout<< "<" <<endl;
    else cout<< "=" << endl;
  }
  return 0;
}
