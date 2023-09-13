#include<stdio.h>
int main()
{
	int ch,qty,choice,amount=0;                // declare all the variables
        char extra;
	do{
	printf("----------Manu---------");          // print all the food items in manu
	printf("\n1.Pizza\t\tprice = 180rs/pcs");
	printf("\n2.Burger\tprice = 100rs/pcs");
	printf("\n3.Dosa\t\tprice = 120rs/pcs");
	printf("\n4.Idli\t\tprice = 50rs/pcs");
	printf("\nPlease Enter your choose... :");   // enter your choice
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("You have selected Pizza.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			printf("Amount:%d",qty*180);
			amount = amount + qty*180;
			printf("\nTotal Amount is:%d",amount);
			break;
		case 2:
			printf("You have selected Burger.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			printf("Amount:%d",qty*100);
			amount = amount + qty*100;
			printf("\nTotal Amount is:%d",amount);
			break;
		case 3:
			printf("You have selected Dosa.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			printf("Amount:%d",qty*120);
			amount = amount + qty*120;
			printf("\nTotal Amount is:%d",amount);
			break;
		case 4:
			printf("You have selected Idli.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			printf("Amount:%d",qty*50);
			amount = amount + qty*50;
			printf("\nTotal Amount is:%d",amount);
			break;	
		default:
		    printf("Please select your valid choice");	
		    break;
	}
	printf("\nDo you want place more orders ? y & n :");
        scanf("\n %c",&extra);
	}while(extra == 'y');              
	printf("Total Amount is:%d",amount);
	return 0;
}
