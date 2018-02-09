#include <iostream>

using namespace std;

int main(){
  int arr['Z'+1];
  string w;
  arr['B']=arr['F']=arr['P']=arr['V']=1;
  arr['C']=arr['G']=arr['J']=arr['K']=arr['Q']=arr['S']=arr['X']=arr['Z']=2;
  arr['D']=arr['T']=3;
  arr['L']=4;
  arr['M']=arr['N']=5;
  arr['R']=6;
  arr['A']=arr['E']=arr['I']=arr['O']=arr['U']=arr['H']=arr['W']=arr['Y']=0;
  while (cin>>w){
    for(int i =0;i<w.size();i++){
      if(arr[(int)w[i]]!=0 ){
        //cout<<arr[(int)w[i]] <<" ";
        if(i>0 && arr[(int)w[i]] != arr[(int)w[i-1]])cout<< arr[(int)w[i]];
        else if(i==0)cout<< arr[(int)w[i]];
      }
    }
    cout<<endl;
  }
  return 0;
}
