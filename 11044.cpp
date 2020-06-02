#include <iostream>

using namespace std;

int main(){

	int count;
	cin>>count;
	while(count--){
		int a,b,l1,l2;
		cin>>a>>b;
		a--;
		b--;
		l1 = a/3;
		if(a%3!=0)l1++;
		l2=b/3;
		if(b%3!=0)l2++;
		cout<<l1*l2<<endl;
	}
}


