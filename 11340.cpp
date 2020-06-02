#include <iostream>

using namespace std;

int main(){

	int test;
	cin>>test;

	while(test--){
		int k;
		int arr[500]={0};
		cin>>k;
		while(k--){
			char aux;
			cin>>aux;
			cin>>arr[int(aux)];

		}
		int m;
		cin>>m;
		string s;
		getline(cin,s);
		int suma = 0;
		while(m--){
			getline(cin,s);
			for(int i=0;i<s.size();i++){

				suma= suma+ arr[int(s[i])];
			}
		}

		printf("%.2f$",suma/100.0);
		cout<<endl;
	}
}
