#include <iostream>

using namespace std;

int main(){
	int count;
	cin>>count;
	while(count--){
		int a,b;
		scanf("%d:%d",&a,&b);

		if(a !=12) a= 12-a;
		if(b !=0){
			b= 60-b;
			a--;
		}
		if(a==0) a=12;
		if(a<10)cout<<0;
		cout<<a<<":";
		if(b<10)cout<<0;
		cout<<b<<endl;
	}
}

