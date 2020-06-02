#include <iostream>

using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int t=0;
		t=a;
		while(a>=b){
			int r=a%b;
			t+=a/b;
			a=a/b+r;
		}
		cout<<t<<endl;
	}
	return 0;
}

