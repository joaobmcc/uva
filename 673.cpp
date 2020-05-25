#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  char aux;
  string t;
  cin>>n;
  getchar();
  while(n--){
    string s;
    getline(cin,s);

    bool rpta = true;
    stack<char> st;
    for(int i = 0; i< s.size(); i++){

      if(s[i] == '[' || s[i] =='('){
	st.push(s[i]);
      }
      else if (s[i] == ']' || s[i] == ')'){
	if(!st.empty()){
	  aux = st.top();
	  st.pop();
	  if(s[i] == ')' && aux == '(')continue;
	  else if(s[i] == ']' && aux == '[')continue;
	  else{
	    rpta = false;
	    break;
	  }
	}
	else{
	  rpta = false;
	  break;
	}
      }
    }
    if(!st.empty())rpta = false;
    if(rpta) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}
