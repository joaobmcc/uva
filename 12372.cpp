#include <iostream>

using namespace std;

int main(){
	int count,n;
	n=1;
	cin>>count;
	while(count--){
		int a,b,c;
		cin>>a>>b>>c;
		cout<<"Case "<<n<<": ";
		if(a<21 && b<21 && c<21)
			cout<<"good";
		else cout<<"bad";
		cout<<endl;
		n++;
	}
}
