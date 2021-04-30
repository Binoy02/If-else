/*
  Binoy Das Gupta
  C program to input week number and print week day.
  02-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable
	int week_num;
	
	//taking input
	printf("Enter number of day = ");
	scanf("%d",&week_num);
	
	if(week_num==1)
	{
		printf("The week day is Sunday\n");
	}
	else if(week_num==2)
	{
		printf("The week day is Monday\n");
	}
	else if(week_num==3)
	{
		printf("The week day is Tuesday\n");
	}
	else if(week_num==4)
	{
		printf("The week day is Wednesday\n");
	}
	else if(week_num==5)
	{
		printf("The week day is Thursday\n");
	}
	else if(week_num==6)
	{
		printf("The week day is Friday\n");
	}
	else if(week_num==7)
	{
		printf("The week day is Saturday\n");
	}
	else
	{
		printf("Invalid week day!\n");
	}
}
