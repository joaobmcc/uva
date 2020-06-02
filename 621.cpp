#include <iostream>

using namespace std;

int main(){
	string a;
	int n;
	cin>>n;
	while(n--){
		cin>>a;
		int l = a.length();
		if(l == 1 && (a[0]=='1' || a[0]=='4')) cout<<"+";
		else if(l == 2 && a == "78") cout<<"+";
		else if(l>2 && a[l-2]=='3' && a[l-1]=='5')cout<<"-";
		else if(l>2 && a[0]=='9' && a[l-1]=='4')cout<<"*";
		else cout<<"?";
		cout<<endl;

	}
}
