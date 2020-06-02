#include <iostream>
#include <string>

using namespace std;

int main(){

	string s;
	cin>>s;
	while(s!="END"){
		int count=1;
		string l;

		while(true){
			l = to_string(s.length());
			if(s == l)break;
			
			else {
				s = to_string(s.length());
				count++;
			}

		}
		cout<<count<<endl;
		cin>>s;
	}
}

