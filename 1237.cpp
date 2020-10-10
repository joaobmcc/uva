#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,d,q,a1,a2;
	string a;
	cin>>t;
	bool f = true;
	while(t--){
		if(f){
			f = false;
		}
		else cout<<endl;
		cin>>d;
		string m[d];
		int l[d];
		int h[d];
		for(int i = 0; i<d;i++){
			cin>>a>>a1>>a2;
			m[i]=a;
			l[i]=a1;
			h[i]=a2;
		}
		cin>>q;
		while(q--){
			int ind = -1;
			cin>>a1;
			for(int i=0; i<d; i++){
				if(a1 >= l[i] && a1 <= h[i]){
					if(ind == -1)ind = i;
					else{
						ind=-1;
						break;
					}
				}
			}
			if(ind<0) cout<<"UNDETERMINED"<<endl;
			else cout<<m[ind]<<endl;
		}

	}
}
