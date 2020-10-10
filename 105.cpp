#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,mi,mf,ax,ay;
	int arr[10000]={0};
	mi = mf = -1;
	while(cin>>a>>b>>c){
		if(mi == -1)mi = a;
		if(mf < c)mf = c;
		for(int i = a+1; i <= c; i++){
			if(arr[i]<b)arr[i]=b;
		}
	}

	ax = mi;
	ay = -1;
	cout<<mi<<" "<<arr[mi+1];
	for(int i = mi+2; i <=mf; i++){
		if(arr[i] != arr[i-1]){
			cout<<" ";
			if(arr[i] > arr[i-1])cout<<i-1;
			else cout<<i-1;
			cout<<" "<<arr[i];
		}
	}
	cout<<" "<<mf<<" "<<0<<endl;
}
