#include <iostream>
using namespace std;

int main(){
	
	//variables
	char op;
	float num1,num2,add,subract,multiply,division;
	
	//heading
	cout<<"\n\t\t********\t CALCULATOR \t********\t\n";
	
	//input operator
	cout<< "\n Enter Operator <+,-,*,/> :";
	cin>> op;
	
	//input number one
	cout<<"\n Enter Number 1 : ";
	cin>> num1;
	
	//input number two
	cout<<"\n Enter Number 2 : ";
	cin>> num2 ;
	
	// if addition
	if(op == '+'){
		add = num1 + num2;
		cout<<"\n\t\t********\t ANSWER \t********\t\n";
		cout<<"\n The Addition of these numbers are : " << add ;
	}
	
	//if subraction
	else if(op == '-'){
		subract = num1 - num2;
		cout<<"\n\t\t********\t ANSWER \t********\t\n";
		cout<<"\n The Subraction of these numbers are : "<< subract;
	}
	
	//if multiplication
	else if(op == '*'){
		multiply = num1 * num2;
		cout<<"\n\t\t********\t ANSWER \t********\t\n";
		cout<<"\n The Multiplication of these numbers are : "<< multiply;
	}
	
	//if division
	else if (op == '/'){
		division = num1 / num2;
		cout<<"\n\t\t********\t ANSWER \t********\t\n";
		cout<<"\n The Division of these numbers are : "<< division;
	}
	
}
