#include <iostream>

using namespace std;

int main(){
  long s,p;
  while(cin>>s>>p, s|p){
    long l,c,f;
    for(long i=s;i>0;i--){
      if(p>=i*i && i%2==1){
	l=c=s-((s-i)/2);
	f=p-(i*i);
	if(f==0)break;
	if(f>=1){
	  l++;f--;}
	if(f>i){ c-=i;f-=i;}
	else {c-=f;break;}
	if(f>i+1){ l-=i+1;f-=i+1;}
	else{ l-=f;break;}
	if(f>i+1){ c+=i+1;f-=i+1;}
	else{ c+=f;break;}
	l+=f;
	break;
      }
    }
    cout<<"Line = "<<l<<", column = "<<c<<"."<<endl;
  }
  return 0;
}
