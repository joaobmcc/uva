#include <iostream>

using namespace std;

int main(){
  int cont = 11;
  int n = 15;
  while(cont<1500){
    n++;
    if(n%2 == 0 || n%3 == 0 || n%5==0){
      cont++;
    }
  }
  cout<<"The 1500'th ugly number is "<<n<<"."<<endl;
}
