//real life example of exception handling
#include<iostream>
#include<string>
using namespace std;
int main(){
	string filename;
	string existingfile="anisa";
	cout<<"Name of file to be opened ";
	cin>>filename;
	try{
		if(filename!=existingfile){
			throw "File can't be opened";
		}
		else{
			cout<<"File opened successfully";
		}
	}
	catch(const char* msg){
		cout<<msg<<endl;
		cout<<"Exiting safely..";
	}
}
