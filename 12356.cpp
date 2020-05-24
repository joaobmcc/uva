#include <iostream>

using namespace std;

int main(){
  int s,b,i,j;
  cin>>s>>b;
  while(s != 0 && b != 0){
    int a[s+1] = {0};

    while(b--){
      cin>>i>>j;
      int ni, nj;
      ni = nj= 0;
      for(int x = i; x<=j; x++){
	a[x]=1;
      }
      for(int y = i-1; y>0; y--){
	if(a[y]==0){
	  ni = y;
	  break;
	}
      }
      for(int z = j+1; z<=s; z++){
	if(a[z]==0){
	  nj=z;
	  break;
	}
      }
      if(ni != 0)cout<<ni;
      else cout<<"*";
      cout<<" ";
      if(nj != 0)cout<<nj;
      else cout<<"*";
      cout<<endl;
    }
    cout<<"-"<<endl;
    cin>>s>>b;
  }

}
