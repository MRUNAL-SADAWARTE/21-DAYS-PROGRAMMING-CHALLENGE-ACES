#include<iostream>
using namespace std ;

int main()
{
	int num1,num2,res,choice;
	char op;
	char c;
	do
	{
	system("CLS");
	cout<<"\nenter first number:";
	cin>>num1;
	cout<<"\nenter second number:";
	cin>>num2;
	cout<<"\nmenu";
	cout<<"\n1.addition";
	cout<<"\n2.subtraction:";
	cout<<"\n3.multiplication:";
	cout<<"\n4.division";
	cout<<"\nenter your choice :";
	cin>>choice;
	switch(choice)
	{
		case 1 : res=num1+num2;
		         cout<<"\naddition is :";
		         cout<<res;
		         break;
		case 2 :res=num1-num2;
		        cout<<"\nsubstraction is :";
		        cout<<res;
		        break;
		case 3 :res=num1*num2;
		        cout<<"\nmultiplication is:";
		        cout<<res;
		        break;
		case 4 :res=num1/num2;
		        cout<<"\ndivison is :";
		        cout<<res;
		        break;
		default:cout<<"invalid option";
	}
	 cout<<"\nwhether you want to continue(y)?";
	 cin>>c;	
  }while(c=='y');
     cout<<"\nprogram over";
}

