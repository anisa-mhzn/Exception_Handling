//practical use: array index out of bound
#include<iostream>
using namespace std;
int main(){
	int a[5];
	int i,inx;
	cout<<"Enter five elements ";
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"ENTER INDEX ";
	cin>>inx;
	try{
	  if(inx<0 || inx>5){
		throw "INDEX OUT OF BOUND";
	}
	else{
		cout<<"Elements at index "<<inx<<"="<<a[inx];
	}
}
catch(const char* msg){
	cout<<"EXCEPTION :"<<msg;
	}
	return 0;
}
