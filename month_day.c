/*
  Binoy Das Gupta
  C program to input month number and print number of days in that month.
  02-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int month_num;
	
	//taking input
	printf("Enter the number of month between 1-12 = ");
	scanf("%d",&month_num);
	
	if(month_num==1 || month_num==3 || month_num==5 || month_num==7 || month_num==8 || month_num== 10 || month_num==12)
	{
		printf("The entered month has 31 days\n");
	}
	else if(month_num==4 || month_num==6 || month_num==9 || month_num==11)
	{
		printf("The entered month has 30 days\n");
	}
	else if(month_num==2)
	{
		printf("The entered month has 28 or 29 days\n");
	}
	else
	{
		printf("Invalid month number!\n");
	}
	
	return 0;
}
