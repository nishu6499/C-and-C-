#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define MAX 5
int main()
{
	int i=1, key=0, num=0, turn, high, low;
	cout<<"\t\t    Welcome to the game of HIGHER or LOWER"<<endl;
	cout<<"\t\t ____________________________________________"<<endl;
	cout<<"RULES :"<<endl;
	cout<<"1. You'll have to guess a number between 1 and 50."<<endl;
	cout<<"2. You only have 5 turns to emerge victorious, i.e, guess the correct number."<<endl;
	srand(time(0));
	key=rand() %50 + 1;
	cout<<"Choose a number "<<endl;
	cin>>num;
	for(i=1; i<=MAX; i++)
	{
		turn=MAX-i;
		if(num<key)
		{
			cout<<"Your guess is lower than the answer, Turns left :"<<turn<<endl;
			cout<<"Try again, guess a number higher than the last one :";
			cin>>num;
		}
		else if(num>key)
		{
			cout<<"Your guess is higher than the answer, Turns left :"<<turn<<endl;
			cout<<"Try again, guess a number lower than the last one :";
			cin>>num;
		}
		else 
		{
			cout<<"You win"<<endl;
			return 0;
		}
	    if(turn<1)
		{
			cout<<"Compuer wins"<<endl;
			return 0;
		}
	}
}
