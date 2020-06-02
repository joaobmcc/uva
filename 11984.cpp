#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t,n;
	double a,b;
	cin>>t;
	n= 1;
	while(t--){
		cin>>a>>b;
		a = a*9/5 + 32;
		b = b+ a;
		cout << "Case "<<n<<": ";
		printf("%.2f",((b-32)*5/9));
		cout <<endl;
		n++;
	}
}

