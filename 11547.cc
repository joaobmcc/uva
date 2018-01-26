#include <iostream>
#include <string>
using namespace std;

int main(){
  int tc;
  cin >> tc;
  while(tc--){
    int num;
    cin>>num;
    num= num*63;
    num = num + 7492;
    num = num *5;
    num = num -498;
    string pal = to_string(num);
    cout<< pal[pal.size()-2]<< endl;
  }
  return 0;
}
