#include <iostream>

using namespace std;

int main(){
  string word;
  cin>> word;
  int cont = 1;
  while (word[0]!='#'){
    cout << "Case "<<cont<<": ";
    cont++;
    if(word == "HELLO") cout<<"ENGLISH"<<endl;
    else if(word.compare("HOLA")==0) cout<<"SPANISH"<<endl;
    else if(word.compare("HALLO")==0) cout<<"GERMAN"<<endl;
    else if(word.compare("BONJOUR")==0) cout<<"FRENCH"<<endl;
    else if(word.compare("CIAO")==0) cout<<"ITALIAN"<<endl;
    else if(word.compare("ZDRAVSTVUJTE")==0) cout<<"RUSSIAN"<<endl;
    else cout<<"UNKNOWN"<<endl;
    cin>>word;
  }
  return 0;
}
