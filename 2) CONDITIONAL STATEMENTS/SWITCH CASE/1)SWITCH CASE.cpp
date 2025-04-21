#include <iostream>
using namespace std;
int main(){
	
	char num;
	cout<<"\n ENTER NUMBER FOR WEEKDAYS [1 to 7] : ";
	cin>>num;
	
		switch(num)
		{
			case '1':
            cout<<"\n Monday";
            break;
            
            case '2':
            cout<<"\n Tuesday";
            break;
            
            case '3':
            cout<<"\n Wednesday";
            break;
            
            case '4':
            cout<<"\n Thursday";
            break;
            
            case '5':
            cout<<"\n Friday";
            break;
            
            case '6':
            cout<<"\n Saturday";
            break;
            
            case '7':
            cout<<"\n Sunday";
            break;
            
            default:
            cout<<"\n Error: Please enter number between 1 to 7.\n";
		}
	
}
