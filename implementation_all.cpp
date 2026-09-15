//comprehensive practical
//banking system exception handling
#include<iostream>
using namespace std;
int main(){
	string name;
	float balance;
	float amt;
	cout<<"ENTER NAME ";
	getline(cin,name);
	cout<<"ENTER AMOUNT TO BE WITHDRAW ";
	cin>>amt;
	cout<<"ENTER YOUR BALANCE ";
	cin>>balance;
	try{
		if(amt<=0){
			throw amt;
		}
		else if(amt>balance){
			throw "WITHDRAWL AMOUNT IS HIGHER";
		}
		else{
			cout<<"AMOUNT WITHDRAWL SUCCESSFULLY FROM "<<name;
		}
	}
	catch(float a){
		cout<<"WITHDRAWL AMOUNT is NEGATIVE"<<amt;
	}
	catch(const char* msg){
		cout<<"EXCEPTION! "<<msg;
	}
	catch(...){
		cout<<"AN UNEXPECTED ERROR OCCURED";
	}
}