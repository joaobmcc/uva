#include <iostream>

using namespace std;

int main(){
	int count=1;
	string s;
	while(cin>>s){
		int n,a,b,min,aux,max;
		bool isequal = true;
		cin>>n;
		cout<<"Case "<<count<<":"<<endl;
		while(n--){
			isequal=true;
			cin>>a>>b;
			if(a<b){
				min=a;
				max = b;
			}
			else{
				min=b;
				max=a;
			}
			aux = s[min];
			while(min<max){
				min++;
				if(aux != s[min]){
					isequal =false;
					break;
				}
			}
			if(isequal)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		count++;
	}
}

