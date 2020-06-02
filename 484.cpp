#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	map<int,int>m;
	vector<int>v;
	int aux;
	while(cin>>aux){
		m[aux]++;
		v.push_back(aux);
	}
	for(auto it=v.begin();it!=v.end();it++){
		
		if(m.find(*it)!=m.end()){
			cout<<*it<<" "<< m.find(*it)->second<<endl;
			m.erase(*it);
		}
	}
}
