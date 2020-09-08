//use the pin 5411
#include<iostream>
#include<stdio.h>
using namespace std;
int deposit();
int withdraw();
int balance();
int exit();
int main()
{
	int deposit=0, amount=10000, withdraw=0, pin, opt, diff, sum, choice;
	cout<<"\t\t     WELCOME TO YOUR BANK"<<endl;
	cout<<"\t\t    ______________________"<<endl;
	cout<<"Enter your pin"<<endl;
	cin>>pin;
	if(pin==5411)
	{
		cout<<"\t\t\t     MENU"<<endl;
		cout<<"\t\t\t    ______"<<endl;
		cout<<"1. Deposit   2. Withdraw"<<endl;
		cout<<"3. Balance   4. Exit"<<endl;
		s:
		cout<<"Enter the option"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 3: 
			{
				cout<<"Your current balance is "<<amount<<endl;
				cout<<"Do you want to perform another transaction (press 0 to exit or 1 to proceed)"<<endl;
				cin>>choice;
				if(choice==1)
				goto s;
				else
				return 0;
			}
			case 2: 
			{
				cout<<"Enter the amount to be withdrawn"<<endl;
				cin>>withdraw;
				if(amount<withdraw)
				{
					cout<<"You don't have sufficient balance"<<endl;
				}
				else
				{
					diff=amount-withdraw;
				    cout<<"New balance is "<<diff<<endl;
				}    
				cout<<"Do you want to perform another transaction (press 0 to exit or 1 to proceed)"<<endl;
				cin>>choice;
				if(choice==1)
				goto s;
				else
				return 0;
			}
			case 1: 
			{
				cout<<"Enter amonut to be deposited"<<endl;
				cin>>deposit;
				sum=amount+deposit;
				cout<<"New balance is "<<sum<<endl;
				cout<<"Do you want to perform another transaction (press 0 to exit or 1 to proceed)"<<endl;
				cin>>choice;
				if(choice==1)
				goto s;
				else
				return 0;
			}
			case 4: 
			{
				cout<<"Thank you. Have a nice day.";
				return 0;
			}
		}
	}
	else
	{
		cout<<"Invalid pin! Please try again"<<endl;
		goto s;
	}
	return 0;
}


