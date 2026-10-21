#include<stdio.h>
int main()
{
int pin=7897;
int epin,choice;
float balance=500000;
float amount;
printf("Enter the pin");
scanf("%d",&epin);

if(epin!=pin)
{
printf("Invalid pin \n");
return 0;
}
printf("Login successful");

do
{
printf("\n MENU \n");
printf("\n1.Check balance\n");
printf("\n2.Withdraw money\n");
printf("\n3.Deposit money\n");
printf("\n4.Exit\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
{
printf("Total balance = %f",balance);
break;
}
case 2:
{
printf("\n Enter withdraw amount:");
scanf("%f",&amount);
if(amount<=0)
{
printf("\n Invalid amount\n");
}
else if (amount>balance)
{
printf("\n Insufficient Amount\n");
}
else
{
balance=balance-amount;
printf("New balance = %f",balance);
printf("\n Withdraw success\n");
}
}
case 3:
{
printf("\n Enter the deposit amount:");
scanf("%f",&amount);
if(amount>0)
{
balance+=amount;
printf("\n Deposit successful \n");
printf(" Total amount:%f",balance);
}

else
{
printf("\n Invalid amount\n");
}

break;
}
case 4:
{
printf("\n Thank you\n");
break;
}
default:
{
printf("\n Invalid choice\n");
}
}
}
while(choice!=4);
getch();
return 0;

}