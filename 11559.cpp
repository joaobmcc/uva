#include <iostream>

using namespace std;

int main(){
	int n,b,h,w;
	while(cin>>n>>b>>h>>w){
		int price,less,aux;
		less =3000000;
		while(h--){
			int waux = w;
			cin>>price;

			while(waux--){
				cin>>aux;

				if(aux >= n &&   price*n <less)less = price *n;
			}
		}
		if(less>b) cout<<"stay home";
		else cout<<less;
		cout<<endl;
	}
}
