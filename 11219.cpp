#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int count;
	cin>>count;
	int number = 1;

	while(count--){
		int a,b,c,x,y,z;
		scanf("%d/%d/%d",&a,&b,&c);
		scanf("%d/%d/%d",&x,&y,&z);
		int age=0;
	  age = c-z;
		if(age == 0){
			if(b<y)age--;
			else if(b==y && a<x)age--;
		}
		else{
			if(y>b)age--;
			else if(y==b && x>a)age--;

		}
		cout<<"Case #"<<number<<": ";
		if(age<0)cout<<"Invalid birth date"<<endl;
		else if(age>130) cout<< "Check birth date" <<endl;
		else cout<< age << endl;
		number++;
	}
}
