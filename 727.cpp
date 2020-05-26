#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  char x;
  getchar();
  getchar();
  while(n--){
    stack<char>s;
    while(true){
      string str;
      getline(cin,str);
      if(str.size() == 0){
	while(!s.empty()){
	  cout<<s.top();
	  s.pop();
	}
	break;
      }
      x = str[0];

      if(x == '('){
	s.push(x);}
      else if (x == ')'){
	if(!s.empty()){
	  while(s.top() !='('){
	    cout<<s.top();
	    s.pop();
	  }
	  s.pop();
	}
      }
      else if(x == '+' || x == '-'){
	if(s.empty())s.push(x);
	else if(s.top() == '(')s.push(x);
	else {
	  while(!s.empty() && s.top() != '('){
	    cout<<s.top();
	    s.pop();
	  }
	  s.push(x);
	}
      }
      else if(x == '*' || x == '/'){
	if(s.empty())s.push(x);
	else if(s.top() == '(')s.push(x);
	else if(s.top() == '+' || s.top() == '-')s.push(x);
	else{
	  cout<<s.top();
	  s.pop();
	  s.push(x);
	}
      }
      else cout<<x;
    }
    cout<<endl<<endl;
  }
}
