//============================================================================
// Name        : a simple calculator
// Author      : eslam_elhefny
// Version     : v 1.0
// Copyright   : for educating purpose
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
char ch=0;

int main() {
do{


	cout << "                    welecom to my calc " << endl
		<<"*******************************************************************"<<endl
		<<"enter...... \n"
		<<setw(50)<<setiosflags(ios::left)<<"|'1' for addition"<<setiosflags(ios::right)<<"'2' for subtraction |\n"
		<<setiosflags(ios::left)<<"|'3' for multiplication"<<setw(49)<<setiosflags(ios::right)<<"'4' for division    |\n"
		<<"===================================================================\n\n";
	int choise=0;
	cin>>choise;
	while(cin.fail() ||choise<1||choise>4)
	{
		cout<<"invalid input \n"<<"try again\n";
		cin.clear();
		cin.ignore();
		cin>>choise;

	}
	cout<<"enter two numbers  \n";
	float num1,num2;
	cin>>num1>>num2;
	while(cin.fail())
	{
		cout<<"invalid input\n "<<"try again\n \n";
		cin.clear();
		cin.ignore();
		cout<<"enter two numbers  \n";
		cin>>num1>>num2;
	}
	switch (choise)
	{
	case(1):
			cout<<num1<<" + "<<num2<<" = "<<num1+num2<<"\n";
			break;
	case(2):
		cout<<num1<<" - "<<num2<<" = "<<num1-num2<<"\n";
		break;
	case(3):
		cout<<num1<<" * "<<num2<<" = "<<num1*num2<<"\n";
		break;
	case(4):
		cout<<num1<<" / "<<num2<<" = "<<num1/num2<<"\n";
		break;
	}
	cout<<"to repeat this process enter 'y'\n"<<"to exit press 'e'\n";

	cin>>ch;
	if (ch=='e')
		exit(0);
}while(ch=='y');
	return 0;
}
