#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
  string num;
  cin>>num;
  while(num[0]!='0'){
    while(num.size()>1){
      int sum=0;
      for(int i=0;i<num.size();i++){
	sum=sum+ (num[i]-'0');
      }
      num = to_string(sum);
    }
    cout<<num<<endl;
    cin>>num;
  }
  return 0;
}
