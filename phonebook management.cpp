#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int add();
int menu();
int list();
int del();
int modify();
int search();
int exit();
struct record
{
	char name[500];char m_name[500];char f_name[550];char address[500];char gen[50];char e_mail[500];
	long int phn_num;long int cit_num;
};
int menu() 
{
	do
	{
	int act;
	printf("\t\t ********WELCOME TO PHONEBOOK**********\n");
	printf("\t\t         _______ __ _________    \n\n");	
	printf("\t\t               MENU\n");
	printf("\t\t               ____\n\n");
	printf("\t\t  1.ADD    2.LIST     3.EXIT\n");
	printf("\t\t  4.MODIFY 5.SEARCH   6.DELETE\n");
	printf("Enter the action of your choice:\n");
	scanf("%ld",&act);
	switch(act)
	{
		case 1:
			{
				add();
			    return 0;
			}
		case 2:
		    {
		    	list();
				break;		    	
			}	
		case 3:
		    {
		    	exit();
				break;		    	
			}
		case 4:
		    {
		   	    modify();
				break;		    	
			}
		case 5:
		    {
		    	search();
				break;		    	
			}	
		case 6:
		    {
		    	del();
				break;		    	
			}				 			
	}
    }while(1);
	
}
int add()
{
	system("cls");
	int i;
	struct record r;
	FILE *fptr;
	fptr = (fopen("F:\\record.txt", "ab+"));
	if(fptr == NULL)
   {
       printf("Error!");
       return(1);
   }
   {
      printf("Enter name: ");
      scanf("%s", &r.name);
	  printf("Enter address: ");
      scanf("%s", &r.address);
      printf("Father's Name: ");
      scanf("%s", &r.f_name);
      printf("Mother's Name: ");
      scanf("%s", &r.m_name);
      printf("Phone NUmber: ");
      scanf("%ld", &r.phn_num);
      printf("Mention Gender (Male/Female): ");
      scanf("%s", &r.gen);
      printf("E-mail ID: ");
      scanf("%s", &r.e_mail);
      printf("Citizen ID Number: ");
      scanf("%ld",&r.cit_num);
      fwrite(&r,sizeof(r),1,fptr);
      fflush(stdin);
      printf("\nrecord saved\n");
      fprintf(fptr,"NAME: %s\n",r.name);
      fprintf(fptr,"ADDRESS: %s\n",r.address);
      fprintf(fptr,"FATHER: %s\n",r.f_name);
      fprintf(fptr,"MOTHER: %s\n",r.m_name);
      fprintf(fptr,"PHONE-NUMBER: %ld\n",r.phn_num);
      fprintf(fptr,"GENDER: %s\n",r.gen);
      fprintf(fptr,"E-MAIL: %s\n",r.e_mail);
      fprintf(fptr,"CITIZEN ID: %ld\n",r.cit_num);
    }
    fclose(fptr);
     printf("\n\nEnter any key");
	 getch();
     menu();
}
int list()
{
	system("cls");
	struct record r;
    FILE *fptr;
fptr=fopen("F:\\record.txt","rb");
if(fptr==NULL)
{
printf("\nERROR!!!!!!!\n");

exit(1);
}
fread(&r,sizeof(r),1,fptr);
      printf("NAME: %s\n",r.name);
      printf("ADDRESS: %s\n",r.address);
      printf("FATHER: %s\n",r.f_name);
      printf("MOTHER: %s\n",r.m_name);
      printf("PHONE-NUMBER: %ld\n",r.phn_num);
      printf("GENDER: %s\n",r.gen);
      printf("E-MAIL: %s\n",r.e_mail);
      printf("CITIZEN ID: %ld\n",r.cit_num);
      printf("\n\nEnter any key");
      getch();
      menu();
}
int exit()
{
	return 0;
}
int modify()
{
	FILE *fptr;
fptr=fopen("F:\\record.txt","rb+");
if(fptr==NULL)
{
printf("\nERROR!!!!!!!\n");

exit(1);
}
	struct record r,s;
	char name[50];
	printf("Enter the name of contact which is to be modified:\n");
	scanf("%s",&name);
	fread(&r,sizeof(r),1,fptr);
	if(strcmp(name,r.name)==0)
	{
	  printf("Enter Name: ");
	  scanf("%s",&s.name);	
	  printf("Enter address: ");
      scanf("%s", &s.address);
      printf("Father's Name: ");
      scanf("%s", &s.f_name);
      printf("Mother's Name: ");
      scanf("%s", &s.m_name);
      printf("Phone NUmber: ");
      scanf("%ld", &s.phn_num);
      printf("Mention Gender (Male/Female): ");
      scanf("%s", &s.gen);
      printf("E-mail ID: ");
      scanf("%s", &s.e_mail);
      printf("Citizen ID Number: ");
      scanf("%ld",&s.cit_num);
      fseek(fptr,sizeof(r),SEEK_CUR);
      fwrite(&s,sizeof(r),1,fptr);
      fflush(stdin);
      printf("\nrecord has been modified\n");
	}
	else
	{
		printf("Contact not found!!!!\n");
		return 0;
	}
	printf("\n\nEnter any key");
	 getch();
     menu();
	
}
int search()
{
	FILE *fptr;
fptr=fopen("F:\\record.txt","rb");
if(fptr==NULL)
{
printf("\nERROR!!!!!!!\n");

exit(1);
}
	struct record r;
	char name[50];
	printf("Enter the name of contact you're looking for:\n");
	scanf("%s",&name);
	printf("Here's the contact you were looking for:");
	fread(&r,sizeof(r),1,fptr);
	if(strcmp(name,r.name)==0)
	{
	  printf("NAME: %s\n",r.name);
      printf("ADDRESS: %s\n",r.address);
      printf("FATHER: %s\n",r.f_name);
      printf("MOTHER: %s\n",r.m_name);
      printf("PHONE-NUMBER: %ld\n",r.phn_num);
      printf("GENDER: %s\n",r.gen);
      printf("E-MAIL: %s\n",r.e_mail);
      printf("CITIZEN ID: %ld\n",r.cit_num);
	}
	else
	{
		printf("Contact not found.Please verify the name!!!\n");
		return 0;
	}
	printf("\n\nEnter any key");
	 getch();
     menu();
}
int del()
{
    struct record r;
    FILE *fptr,*temp;
	char name[100];
	fptr=fopen("F:\\record.txt","rb");
	if(fptr==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.\n");

		}
	else
	{
		temp=fopen("F:\\temp.txt","wb+");
		if(temp==NULL)

            printf("ERROR!!!!!");
		else

        {
          printf("Enter CONTACT'S NAME:");
		  scanf("%s",&name);

		  fflush(stdin);
		  fread(&r,sizeof(r),1,fptr);
		{
			if(strcmp(r.name,name)!=0)
			{
				printf("NO CONACT'S RECORD TO DELETE.\n");
		        remove("temp.txt");
			}
			
			if(strcmp(r.name,name)==0)
            {
            remove("record.txt");
			rename("temp.txt","record.txt");
			printf("RECORD DELETED SUCCESSFULLY.\n");          	
			}    
		}
	fclose(fptr);
	fclose(temp);
	
		}
	}
	printf("\n\nEnter any key");
	 getch();
     menu();
}
int main(int argc, char** argv)
{
	menu();
}
