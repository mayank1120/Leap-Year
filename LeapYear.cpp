#include <iostream>
using namespace std;

bool checkLeapYear(int year)
{
	if(year % 400 == 0) {
		return true;
	}
	else if(year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int year = 0 ;
	int choice = 0;
	while(1) {
		cout<<"Enter Year"<<endl;
		cin>>year;
		checkLeapYear(year)? cout<<"Leap Year":cout<<"Not a Leap Year";
		cout<<endl;
		cout<<"Do you want to continue? Press 1 to continue or Press any other key to exit ";
		cin>>choice;
		if(choice != 1) {
			cout<<"Exiting Program";
			break;
		}
		choice = 0;
	}
	system("PAUSE");

}
