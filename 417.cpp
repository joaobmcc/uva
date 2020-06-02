#include <iostream>
#include <string>
using namespace std;

int main(){

	string s;
	while(cin>>s){
		int r=(int)s[0]-'a'+1;
		for(int i=1;i<s.size();i++){
			if((int)s[i]>(int)s[i-1])r+=(int)s[i]-'a'+1;
			else {
				r=0;
				break;
			}
		}
		cout<<r<<endl;
	}
}
