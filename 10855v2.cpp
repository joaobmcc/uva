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
    
      int x1,x2,x3,x4;
      x1=x2=x3=x4=0;
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
	    if(is)x1++;
	  }

	  if(a[j][k]==b[n-1][0]){
	    bool is =true;
	    for(int l=0;l<n;l++){
	      for(int m=0;m<n;m++){
		if(a[j+l][k+m] == b[n-m-1][l]);
		else{
		  is=false; break;
		}
	      }
	      if(!is)break;
	    }
	    if(is)x2++;
	  }

	  if(a[j][k]==b[n-1][n-1]){
	    bool is =true;
	    for(int l=0;l<n;l++){
	      for(int m=0;m<n;m++){
		if(a[j+l][k+m] == b[n-l-1][n-m-1]);
		else{
		  is=false; break;
		}
	      }
	      if(!is)break;
	    }
	    if(is)x3++;
	  }

	  if(a[j][k]==b[0][n-1]){
	    bool is =true;
	    for(int l=0;l<n;l++){
	      for(int m=0;m<n;m++){
		if(a[j+l][k+m] == b[m][n-l-1]);
		else{
		  is=false; break;
		}
	      }
	      if(!is)break;
	    }
	    if(is)x4++;
	  }

        }
      }
      cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;

  }
  return 0;
}


