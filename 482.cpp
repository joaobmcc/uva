#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Interval{
	int index;
	string value;
};

bool compare(Interval a, Interval b){
	return a.index<b.index;
}
int main(){
	int count;
	string line;
	cin>>count;
	getline(cin, line);
	while(count--){
		getline(cin, line);

		getline(cin, line);
		stringstream aux(line);
		vector<Interval>vec;
		int number;
		while(aux >> number){
			Interval i ={
				number,
				"",
			};
			vec.push_back(i);
		}
		getline(cin, line);
		stringstream aux2(line);
		string fl;
		int index = 0;
		while(aux2 >> fl){
			vec[index].value = fl;
			index++;
		}
		sort(vec.begin(), vec.end(), compare);
		for(auto x:vec){
			cout<<x.value<<endl;
		}
		if(count>0)cout<<endl;
	}
}
	
