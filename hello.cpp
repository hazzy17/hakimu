#include <iostream>
#include <string>
using namespace std;

void add(int a,int b,int sum){
	sum = a + b;
	cout<<sum<<endl;
	
}

void multiply(int a,int b,int answer){
	answer = a * b;
	cout<<sum<<endl;
}

void qotient(int a,int b,answer){
	if a > 0{
		answer = a/b;
		cout<<answer<<endl;
	}else{
		cout<<"Division by 0 erro!"<<endl;
	}
}

int main(){
	int a,b;
	string problem;
	cout<<"what is your problem?"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"         add         "<<endl;
	cout<<"       quotient      "<<endl;
	cout<<"       multiply      "<<endl;
	cout<<"---------------------"<<endl;

	cin>>problem>>endl;
	if problem == "add"{
		cout<<"Enter value 1: ";
		cin>>a>>endl;
		cout<<"Enter value 2: ";
		cin>>b>>endl;
		add(a,b);
	}else if problem == qotient{
		cout<<"Enter value 1: ";
		cin>>a>>endl;
		cout<<"Enter value 2: ";
		cin>>b>>endl;
		qotient(a,b);

	}else if problem == multiply{
		cout<<"Enter value 1: ";
		cin>>a>>endl;
		cout<<"Enter value 2: ";
		cin>>b>>endl;
		multiply(a,b);
	}else{
		cout<<"Sorry we don't have that yet"<<endl;
	}

	Return 0;	 
}

