#include <iostream>
using namespace std;

int main(){
	
	//All the variables for subjects..
	
	float per, obt, pf, disc , eng , cal , pst , ict;
		
	// heading 
	cout<< "\n\t********\tMADE BY KASHAN ALI KHAN \t********\t";
	printf("\n\n\t********\tENTER MARKS OF ALL SUBJECTS\t********\t");
	
	// here we enter marks of all subjects
	
	cout<< " \n\n ENTER SUBJECTS 1 MARKS [ENGLISH] \n ";
	cin>>eng;//take input of subject marks
	
	cout<< " \n ENTER SUBJECTS 2 MARKS [CALCULAS]\n ";
	cin>>cal;//take input of subject marks
	
	cout<< " \n ENTER SUBJECTS 3 MARKS [PAKISTAN STUDIES]\n ";
	cin>>pst;//take input of subject marks
	
	cout<< " \n ENTER SUBJECTS 4 MARKS [ICT]\n ";
	cin>>ict;//take input of subject marks
	
	cout<< " \n ENTER SUBJECTS 5 MARKS [DISCRETE STRUCTURE] \n ";
	cin>>disc;//take input of subject marks
	
	cout<< " \n ENTER SUBJECTS 6 MARKS [PROGRAMMING FUNDAMENTAL]\n ";
	cin>>pf;//take input of subject marks
	
	// start of marks report
	//heading
	printf("\n\t********\tMARKS REPORT\t********\t");
	
	// here we calculate obtain marks
	obt = eng + cal+ ict + pst + disc + pf;
	cout<< "\n\n TOTAL MARKS\t = 600"; 
	cout<< " \n OBTAIN MARKS \t = " << obt;
	
	//here we calculate percentage%
	float total = 600;
	per = (obt/600)*100;
	cout<< " \n PERCENTAGE IS \t = "<< per<<"%";
	
	// here is a code for grades and GPA
	
	//if percentage is greater than or equal to 90
	 if (per>= 90){
		cout<< "\n GRADE IS \t =A+ \n GPA IS \t =4.0";
	}
	
	//if percentage is greater than or equals to 85 or less than or equals to 89
	else if (per>= 85 && per<=89){
		cout<< "\n GRADE IS \t =A \n GPA IS \t =4.0";
	}
	
	//if percentage is greater than or equals to 80 or less than or equals to 84
	else if (per>= 80 && per<=84){
		cout<< "\n GRADE IS \t =A- \n GPA IS \t =3.8";
	}
	
	//if percentage is greater than or equals to 75 or less than or equals to 79
	else if (per>= 75 && per<=79){
		cout<< "\n GRADE IS \t =B+ \n GPA IS \t =3.4";
	}
	
	//if percentage is greater than or equals to 71 or less than or equals to 74
	else if (per>= 71 && per<=74){
		cout<< "\n GRADE IS \t =B \n GPA IS \t =3.0";
	}
	
	//if percentage is greater than or equals to 68 or less than or equals to 70
	else if (per>= 68 && per<=70){
		cout<< "\n GRADE IS \t =B- \n GPA IS \t =2.8";
	}
	
	//if percentage is greater than or equals to 64 or less than or equals to 67
	else if (per>= 64 && per<=67){
		cout<< "\n GRADE IS \t =C+ \n GPA IS \t =2.4";
	}
	
	//if percentage is greater than or equals to 61 or less than or equals to 63
	else if (per>= 61 && per<=63){
		cout<< "\n GRADE IS \t =C \n GPA IS \t =2.0";
	}
	
	//if percentage is greater than or equals to 57 or less than or equals to 60
	else if (per>= 57 && per<=60){
		cout<< "\n GRADE IS \t =C- \n GPA IS \t =1.8";
	}
	
	//if percentage is greater than or equals to 53 or less than or equals to 56
	else if (per>= 53 && per<=56){
		cout<< "\n GPA IS \t =1.4 \n GRADE IS \t =D+";
	}
	
	//if percentage is greater than or equals to 50 or less than or equals to 52
	else if (per>= 50 && per<=52){
		cout<< "\n GRADE IS \t =D \n GPA IS \t =1.0";
	}
	// if percentage is less than 50
	else if (per<50){
		cout<< "\n GRADE IS \t =FAIL";
	}
	
	//end of code
}

