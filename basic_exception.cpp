// basic exception handling
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter value of a and b: "<<endl;
	cin>>a>>b;
	
	try{
		if(b==0){
			throw "Division by zero";
		}
		else{
			cout<<"RESULT= "<<(float)a/b;
		}
	}
	catch(const char* msg){
		cout<<"ERROR!"<<msg;
	}
	return 0;
}