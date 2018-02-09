#include <iostream>

using namespace std;

int main(){
  int N,n;
  while(cin>>N>>n, N|n){

    char a[N][N];
    char b[n][n];
    char test[n][n];
    string aux;
    for(int i =0;i<N;i++){
      cin>>aux;
      for(int j=0;j<N;j++){
        a[i][j]=aux[j];
      }
    }
    for(int i =0;i<n;i++){
      cin>>aux;
      for(int j=0;j<n;j++){
        b[i][j]=aux[j];
      }
    }
    
    for(int i=0;i<4;i++){
      int cont=0;
      for(int j=0;j<N-n+1;j++){
        for(int k=0;k<N-n+1;k++){
	  if(a[j][k]==b[0][0]){
	    bool is =true;
	    for(int l=0;l<n;l++){
	      for(int m=0;m<n;m++){
		if(a[j+l][k+m] == b[l][m]);
		else{
		  is=false; break;
		}
	      }
	      if(!is)break;
	    }
	    if(is)cont++;
	  }
        }
      }
      if(i<3){
        cout<<cont<<" ";
        copy(&b[0][0],&b[0][0]+n*n,&test[0][0]);
        for(int i =0;i<n;i++){
          for(int j=0;j<n;j++){
            b[i][j]=test[n-j-1][i];
	  }
        }
      }else cout<<cont<<endl;
    }
  }
  return 0;
}


