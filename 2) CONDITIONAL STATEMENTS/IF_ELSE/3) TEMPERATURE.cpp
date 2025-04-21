#include <iostream>
using namespace std;

int main(){
	
	// variable for temperature
	int temp;
	
	//heading
	cout<< "\n \t********\t MEASURMENT OF TEMPETAURE \t********\t";
	
	cout<< "\n\n ENTER TEMPERATURE IN DEGREES : ";
	cin>> temp;//take input temperature in integer
	
	
	if(temp >= 50){
		cout<< "\n TEMPERATURE IS VERY HOT \n";
	}
	else if(temp >= 40 && temp < 50){
	cout<< "\n TEMPERATURE IS  HOT \n";
	}
	else if(temp >= 30 && temp < 40){
	cout<< "\n TEMPERATURE IS  MILD \n";
	}
	else if(temp >= 20 && temp < 30){
	cout<< "\n TEMPERATURE IS  PLEASENT \n";
	}
	else if(temp >= 10 && temp < 20){
	cout<< "\n TEMPERATURE IS  COLD \n";
	}
	else if(temp >= 0 && temp < 10){
	cout<< "\n TEMPERATURE IS  VERY COLD \n";
	}
	else if (temp < 0){
		cout<< "\n TEMPERATURE IS  FREEZING \n";
	}
	
	//end of code
}
