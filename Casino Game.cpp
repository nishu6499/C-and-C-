#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;
int main()
{
	char username[50];
	int bet=0, num, key=0, prize, bal=0, ans;
	cout<<"\t\t_____________________________"<<endl<<endl;
	cout<<"\t\t        CASINO GAME"<<endl<<endl;
	cout<<"\t\t_____________________________"<<endl;
	cout<<"Enter your username: "<<endl;
	cin>>username;
	cout<<endl;
	cout<<"Enter deposit amount to play the game: "<<endl;
	cin>>bal;
	cout<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"                       RULES"<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"1. Choose any number between 1 to 10."<<endl;
	cout<<"2. If you guess the correct number, you'll get 10 times your bet."<<endl;
	cout<<"3. If you guess the wrong number, you'll lose you bet."<<endl<<endl<<endl;
	cout<<"-----------------------------------------------------------------"<<endl<<endl;
	cout<<"Your current balance is: "<<bal<<endl;
	t:
	{
	cout<<username<<", place the bet: "<<endl;
	cin>>bet;
	s:
	{
	if(bet<=bal)
		{
			srand(time(0));
	        key=rand() %10 + 1;
	        cout<<"Choose a number between 1 to 10: "<<endl;
	        cin>>num;
	        if(num>key||num<key)
	        {
	        	cout<<"Bad Luck this time!! You lost "<<bet<<endl;
		        cout<<"The winning number was "<<key<<endl;
		        bal=bal-bet;
		        cout<<username<<", your current balance is "<<bal<<endl;
		        cout<<"Do you want to play again"<<endl;
		        cout<<"(press 0 to leave or 1 to proceed)"<<endl;
	            cin>>ans;
	            if(ans==1)
	            {
	            	cout<<"Your current balance is: "<<bal<<endl;
		            cout<<username<<", place the bet: "<<endl;
	                cin>>bet;
	                goto s;
				}
	            if(ans==0)
	            {
	            	cout<<"Thanks for playing."<<endl;
		            return 0;
	            }
	        }
	        else if(num==key)
	        {
	        	cout<<"You win."<<endl;
	        	prize=10*bal;
		        cout<<"Awesome!! You won "<<prize<<endl;
		        bal=bal+prize;
		        cout<<username<<", your current balance is "<<bal<<endl;
		        cout<<"Do you want to play again"<<endl;
		        cout<<"(press 0 to leave or 1 to proceed)"<<endl;
	            cin>>ans;
	            if(ans==1)
	            {
	            	cout<<"Your current balance is: "<<bal<<endl;
		            cout<<username<<", place the bet: "<<endl;
	                cin>>bet;
	                goto s;
				}
	            if(ans==0)
	            {
	            	cout<<"Thanks for playing."<<endl;
		            return 0;
	            }
			}
        }
        else if(bet>bal)
        {
        	cout<<"Sorry you don't have enough balance! Please try again."<<endl;
    	    goto t;
	    }
    }
    }
}
    
