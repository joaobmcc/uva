#include <iostream>

using namespace std;

int main(){
  string word;
  cin>> word;
  int cont =1;
  while(word[0] !='*' ){
    cout<<"Case "<<cont<<": ";
    cont++;
    if(word=="Hajj")cout<<"Hajj-e-Akbar"<<endl;
    else if(word == "Umrah") cout<<"Hajj-e-Asghar"<<endl;
    cin>>word;
  }
  return 0;
}
