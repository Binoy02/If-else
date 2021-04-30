/*
  Binoy Das Gupta
  C program to input electricity unit charges and calculate total electricity bill 
  according to the given condition:
[ For first 50 units Rs. 0.50/unit
  For next 100 units Rs. 0.75/unit
  For next 100 units Rs. 1.20/unit
  For unit above 250 Rs. 1.50/unit ]
  An additional surcharge of 20% is added to the bill
  10-04-2021
*/

#include<stdio.h>
int main()
{
	// declaring variables
	int unit;
	double pre_charge, total_charge;
	
	// taking input
	printf("Enter the unit = ");
	scanf("%d",&unit);
	
	if(unit <= 50)
	{
		pre_charge = unit * 0.5;
	}
	else if(unit <= 150)
	{
		pre_charge = 25 + ((unit-50) * 0.75);
	}
	else if(unit <= 250)
	{
		pre_charge = 25 + 75 + ((unit-150) * 1.20);
	}
	else if(unit > 250)
	{
		pre_charge = 25 + 75 + 120 + ((unit-250) * 1.50);
	}
	
	total_charge = pre_charge + (pre_charge * 0.20);
	
	printf("The total electricity bill is = %0.2lf\n",total_charge);
	
	return 0;
}
