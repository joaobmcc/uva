#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,t,a1,a2,a3;

	while(cin>>n){

		t=m=1;	

		for(int i=0;i<n;i++){
			t= t*10;
			if(i < n/2)m = m*10;
		}

		for(int i=0; i<t; i++){
			a1=i/m;
			a2=i%m;
			a3 = a1+a2;
			a3 = a3*a3;
			if(a3 == i){
				string s = to_string(a3);
				for(int i = s.length(); i <n; i++){
					cout<<"0";
				}
				cout<<s<<endl;
			}
		}
	}
}
