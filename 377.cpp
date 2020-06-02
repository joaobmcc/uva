#include <iostream>
#include <string>

using namespace std;

int conv(string s){
	int n=0;
	for (int i=0;i<s.size();i++){
		n*=4;
		if(s[i]=='U')n++;
		else if(s[i]=='C')n+=2;
		else if(s[i]=='D')n+=3;
	}
	return n;
}

int main(){
	int N;
	cin>>N;
	cout<<"COWCULATIONS OUTPUT"<<endl;
	while(N--){
		string a,b,c;
		cin>>a>>b;
		int an,bn;
		an=conv(a);
		bn=conv(b);
		int x=3;
		while(x--){
			char C;
			cin>>C;
			if(C=='A')bn+=an;
			else if(C=='R')bn/=4;
			else if(C=='L')bn*=4;
		}
		cin>>c;
		int cn;
		cn=conv(c);
		if(cn==bn)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}
