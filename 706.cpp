#include <iostream>

using namespace std;

int main(){
	int a;
	string b;

	while(cin>>a>>b){
		if(a==0 && b=="0")break;

		int count=0;
		for(int x = 0; x < 5; x++){

			for(int i=0; i<b.length(); i++){
				if(x == 0 || x == 2 || x == 4)cout<<" ";
				if(x == 0 || x == 2 || x == 4){
					for (int j=0; j<a; j++){
						if(x==0 && (b[i] == '1' || b[i] == '4')) cout<<" ";
						else if(x==2 && (b[i] == '1' || b[i] == '7' || b[i] == '0')) cout<<" ";
						else if(x==4 && (b[i] == '1' || b[i] == '4' || b[i] == '7')) cout<<" ";
						else cout<<"-";
					}
				}
				if(x == 1 || x == 3){

						for (int j=0; j<a+2; j++){
							if(j==0){
								if(x==1 &&(b[i] == '1' || b[i]=='2' || b[i]=='3' || b[i]=='7'))cout<<" ";
								else if(x==3 &&(b[i]=='2'||b[i]=='6'||b[i]=='8'||b[i]=='0'))cout<<"|";
								else {
									if(x == 1)cout<<"|";
									else cout<<" ";
								}
							}
							else if(j == a+1){
								if(x==1 &&(b[i] == '5' || b[i] == '6')) cout<<" ";
								else if(x==3 && b[i]=='2') cout<<" ";
								else cout<<"|";
							}
							else cout<<" ";
						}
				}
				if(x == 0 || x == 2 || x == 4)cout<<" ";
				if(i != b.length()-1)cout<<" ";
			}
			cout<<endl;
			if(x == 1 || x == 3){
				count++;
				if(count<a)x--;
				else count = 0;
			}
		}
		cout<<endl;
	}
}

