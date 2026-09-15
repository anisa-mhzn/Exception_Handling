//catching all exception
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two values: ";
	cin>>a>>b;
	try{
		if(b==0){
			throw "Division by '0' isn't possible";
		}
		else if(a<0){
			throw a;
		}
		else{
			cout<<"RESULT= "<<(float)a/b;
		}
	}
	catch(const char* msg){
		cout<<"Exception!"<<msg;
	}
	catch(...){
		cout<<"An unexpected Exception occured!";
	}
}