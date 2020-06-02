#include <iostream>
#include <bitset>

using namespace std;

bitset<1000010>bs;

void sieve(){
	long long size=100000;

	//bs.reset();
	//bs.flip();
	//cout<<bs;
	//bs.set(0,true);
	//bs.set(1,true);
	cout<<"ok";
	for (long long i=2;  i<size; i++){
		cout<<i;
		if(!bs.test(i)){
			for(long long j=i*i; i<size; j+=i){
				bs.set(j,true);
			}
		}
	}
}

int main(){
	sieve();
	long long n;
	while(cin>>n){
	
		if(!bs.test(n)){
			cout<<n<< " is prime."<<endl;
		}

		else cout<<n<< " is not prime."<<endl;
	}
	return 0;
}

