#include <iostream>

using namespace std;

int main(){
  int N;
  cin>>N;
  while(N--){
    int aux;
    long arr1[4],arr2[8];
    long *imp = new long[64];
    for(int i=0;i<15;i++){
      cin>>aux;
      if(i>5 && i<10) arr1[i-6]=aux;
      else if(i>9) arr2[i-10]=aux;
    }
    int cont=36;
    int j=0;
    for(int i=0;i<9;i++){
      if((cont+i)%2==0){
	imp[cont+i]=arr2[j];j++;
      }else{
        imp[cont+i]=(arr1[j-1]-(arr2[j-1]+arr2[j]))/2;
      }

    }

    cont=35;
    for(int i=1;i<9;i++){
      int ind=9-i;
      for(int j=(9-i);j>0;j--){
        imp[cont]=imp[cont+ind]+imp[cont+ind+1];
	cont--;
      }
    } 
    cont=0;
    int sum=2;
    for(int i=0;i<45;i++){
      cout<<imp[i];
      if(i==cont){
        cout<<endl;
	cont=cont+sum;
	sum++;
      }
      else cout<<" ";
    }
  }
  return 0;
}
