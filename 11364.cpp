#include <iostream>

using namespace std;

int main(){
	int count;
	cin>>count;

	while(count--){
		int a,ma,me,aux;
		me = 99;
		ma = 0;
		cin>> a;
		while(a--){
			cin>>aux;
			if(aux>=ma)ma = aux;
			if(aux<=me)me = aux;
		}
		cout<<(ma-me)*2<<endl;
	}
}
