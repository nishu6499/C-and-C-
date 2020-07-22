#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ord();
int menu();
struct menu
{
	int code;
	int price;
	int number;
}a[5000];
int served=0, order=0;  
int ord()
{
	int num,code,quant;
	printf(" Number of items to be ordered:\n");
    scanf("%d",&num);
	while(num--){
    printf(" Enter the item code of the dish:\n");
    scanf("%d",&code);
    switch(code)
	{
	case 101 : 
	{
        printf (" Please enter the quantity: \n");
         scanf("%d", &quant);
        a[order].number+=quant;
		a[order].price += (60*quant);
        break;
	}
	case 102 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (18*quant);
        break;
	}
	case 103 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (60*quant);
        break;
	}
	case 104 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (90*quant);
        break;
	}
	case 105 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (160*quant);
        break;
	}
	case 106 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (180*quant);
        break;
	}
	case 107 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (150*quant);
        break;
	}case 108 : 
	{
        printf (" Please enter the quantity: \n");
         scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (80*quant);
        break;
	}
	case 109 : 
	{
        printf (" Please enter the quantity: \n");
        scanf ("%d", &quant);
        a[order].number+=quant;
		a[order].price += (8*quant);
        break;
	}
    }
}
}
int menu()
{
	
		printf("\n\n           ---------------MENU---------------\n\n");
		printf("    Item Code    Description       Size       Price\n\n");
		printf("    [101]        Dal Fry           Full       Rs. 60\n\n");
		printf("    [102]        Butter Naan       ----       Rs. 18/pc\n\n");
		printf("    [103]        Veg Manchurian    Full       Rs. 60\n\n");
		printf("    [104]        Veg Noodles       Full       Rs. 90\n\n");
		printf("    [105]        Fried Rice        Full       Rs. 160\n\n");
		printf("    [106]        Mutter Paneer     Full       Rs. 180\n\n");
		printf("    [107]        Shahi Paneer      Full       Rs. 150\n\n");
		printf("    [108]        Burji Paneer      Half       Rs. 80\n\n");
		printf("    [109]        Phulka/Roti        ----      Rs. 8/pc\n\n");
}
int main()
{
  do
  {
	char name[50],ans;
	int temp,num;
	printf("\n\n\t\t  ********  WELCOME TO NsJ's CaFe  ********");
	printf("\t\t\t                            _______ __ ___ _ ____ \n\n");
	printf(" Choose one of the following actions:\n");
	printf(" 1.ORDER\n 2.SERVE\n 3.DISPLAY\n 4.EXIT\n");
	printf("\n Enter your Name:\n");
	 scanf("%s",&name);
	a[order].number=order;
	printf("Enter the action you'd like to perform:\n");
	 scanf("%d",&temp);
	if(temp==1)
	{menu();
	a[order].code=0;
	a[order].number=0;
	a[order].price=0;
	ord();
    printf(" Would you like to order anything else (Y/N)?\n");
     scanf("%s", &ans);     
    if(ans == 'y')
    ord();
    else
    printf(" Total amount of food ordered : %d.\n\n\n",a[order].number);
    printf(" THANKS %s .\n\n\n ",name);
    printf("Total amount to be paid is | __%d__|.\n\n\n",a[order].price);
    printf("\n **YOUR ORDER IS READY**\n");
    order++;
    printf(" **ENJOY YOUR MEAL**\n");
    }
    else if(temp==2)
    {
    	if(order==0)
        printf(" Please place your order first.\n");
        else if(served==order)
        printf(" All orders are served.\n");
        served++;    
	}
	else if(temp==3)
	{
		printf(" Number of orders: %d.\n",order);
		printf(" Total number of orders served :%d.\n",served);
	}
	else
	return 0;
  }while(1);
}
		

