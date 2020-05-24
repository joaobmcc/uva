#include <iostream>

using namespace std;

int main(){
  string s;
  while(cin>>s){
    string n = "";
    for(int i = 0; i<s.length(); i++){
      int a = s[i];
      a -=7;
      n += char(a);
    }
    cout<<n<<endl;
  }
}

