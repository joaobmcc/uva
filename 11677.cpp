#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	while(a!=0 || b!=0 || c!=0 || d!=0){
		int min=0;
		if(b<=d)min+=d-b;
		else {
			min+= d+ (60-b);
			c--;
		}

		if(a<=c)min+=60*(c-a);
		else min+= 60*((24+c)-a);
		cout<< min <<endl;
		cin>>a>>b>>c>>d;
	}
}
