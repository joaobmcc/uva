#include <iostream>

using namespace std;

int main(){
	long long year;
	while(cin>>year){
		int cont =0;
		bool leap = false;
		if((year%4==0 && year%100!=0) || year%400 == 0){
			cout<< "This is leap year."<<endl;
			leap = true;
			cont++;
		}
		if(year%15==0){
			cout<<"This is huluculu festival year."<<endl;
			cont++;
		}
		if(leap && year%55==0){
			cout<<"This is bulukulu festival year."<<endl;
			cont++;
		}
		if(cont == 0)
			cout<<"This is an ordinary year."<<endl;
		cout<<endl;
	}
}
