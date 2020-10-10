#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	long ix,d,k,n,t,f;

	cin>>c;

	while(c--){
		cin>>ix;
		ix++;
		long arr[ix];
		for(int i=0;i<ix;i++){
			cin>>arr[i];
		}
		cin>>d>>k;
		t=d;
		n=1;
		while(k>t){
			n++;
			t+=(d*n);
		}
		f=0;
		for(int i=0; i<ix;i++){
			f = f + (arr[i] * pow(n,i));
		}
		cout<<f<<endl;
	}
}
