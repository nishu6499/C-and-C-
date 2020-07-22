//ASCII p=112, r=114, s=115.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
char random (int n)//n value to be defined by user, declaring random function.
{
	srand(time(0));
    return rand() % n;
}
int main()
{
	char choice[] = {'r', 'p', 's'};//array r=>0 p=>1 s=>2
	int temp;
	char ans;
    char str1[]="rock";//string
	char str2[]="paper";//string
	char str3[]="scissors";//string
	char str4[]="quit";//string
	char key[50];//string
	do
	{
	printf("\n\n\t\t    ********  ROCK PAPER SCISSORS ********");
	printf("\t\t                                      ____ _____ ________\n\n");
	printf("\npick one from the following >>ROCK, PAPER, SCISSORS or QUIT<<:");
	scanf("%s",&key);
	if(strcmp(str1,key)==0)
	printf("your choice is : %s",key);
	else if(strcmp(str2,key)==0)
	printf("your choice is : %s",key);
	else if(strcmp(str3,key)==0)
	printf("\n||you played : %s||\n",key);
	else
	{return 0;}
	temp=random(3)+1;//random function call, n=3(value of n defined).
	ans=choice[temp-1];//accessing element from array choice.
	printf("\n\n\t\t||r=>rock||      ||s=>scissors||      ||p=>paper||\n\n");
	printf("\n||the computer choose: %c||\n",ans);
	if(key[0]==ans)//string's first element i.e. r,p or s and cpmparing to ans element.
	printf("      \ttie     :):");
	else if(key[0]>ans)
	printf("      \tyou win     :)");
	else 
	printf("      \tcomputer wins     :(");
    }while(1);
}
