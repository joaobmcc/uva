#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,cont;
		int menor=0;
		int menord=0;
		cin>>a>>b;
		double r;
		for(int i=a;i<=b;i++){
			r= sqrt(i);

			cont=0;
			for(int j=1;j<=r;j++){
				if(i%j==0 ){
					cont++;
					if(j<r)cont++;
				}

			}
			if(menord<cont){
				menord=cont;
				menor=i;
			}
		}
		cout<<"Between "<<a<<" and "<<b<<", "<<menor<<" has a maximum of "<<menord<<" divisors."<<endl;
	}
}

