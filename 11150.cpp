#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cont,res;
	while(cin>>n){
		cont=0;
		res=0;
		while(true){
			cont+=n;
			n+=res;
			if(n<3)break;
			res=n%3;

			n=n/3;
		}
		if(n==2)cont++;
		cout<<cont<<endl;
	}


}
