#include <iostream>

using namespace std;

int main(){

	int count,n;
	n=1;
	while(cin>>count){
		if(count==0)break;
		int aux,sum;
		sum=0;
		while(count--){
			cin>>aux;
			if(aux==0)sum--;
			else sum++;
		}
		cout<<"Case "<<n<<": "<<sum<<endl;
		n++;
	}
}
