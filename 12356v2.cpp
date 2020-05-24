#include <iostream>

using namespace std;

int main(){
  int s,b,l,r,il,ir;
  cin>>s>>b;
  while(s!= 0 && b!=0){
    int a[s+1] = {0};
    while(b--){
      cin>>l>>r;
      if(l>1){
	if(a[l-1] != 0)il=a[l-1];
	else il=l;
      }
      else il = 1;
      if(r<s){
	if(a[r+1] != 0)ir=a[r+1];
	else ir=r;
      }
      else ir=s;
      a[il]=ir;
      a[ir]=il;
      if(il == 1)cout<<"*";
      else cout<<il-1;
      cout<<" ";
      if(ir == s)cout<<"*";
      else cout<<ir+1;
      cout<<endl;
    }
    cout<<"-"<<endl;
    cin>>s>>b;
    
  }
}
