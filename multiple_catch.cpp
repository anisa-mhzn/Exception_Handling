//multiple catch statements
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"ENTER AN INTEGER: ";
	cin>>a;
	try{
		if(a==0){
			throw  4;
		}
		else if(a<0){
			throw "It is a string!";
		}
		else if(a>100){
			throw 2.5f;
		}
		else{
			cout<<"Valid integer!!";
		}
	}
	catch(int a){
		cout<<"Caught int:"<<a;
	}
	catch(const char* msg){
		cout<<"string caught:"<<msg<<endl;
	}
	catch(float a){
		cout<<"Caught float: "<<a;
	}
	return 0;
}
