/*
  Binoy Das Gupta
  C program to input basic salary of an employee and calculate its Gross salary according to following:
[ Basic Salary <= 10000 : HRA = 20%, DA = 80%
  Basic Salary <= 20000 : HRA = 25%, DA = 90%
  Basic Salary > 20000 : HRA = 30%, DA = 95%  ]
  08-04-2021
*/

#include<stdio.h>
int main()
{
	// declaring variables
	double basic_salary, gross_salary;
	double HRA, DA; // HRA = House Rent Allowance, DA = Dearness Allowance
	
	// taking input
	printf("Enter Basic Salary = ");
	scanf("%lf",&basic_salary);
	
	if(basic_salary <= 10000)
	{
		HRA = basic_salary * 0.2 ;
		DA = basic_salary * 0.8 ;
	}
	else if(basic_salary <= 20000)
	{
		HRA = basic_salary * 0.25 ;
		DA = basic_salary * 0.9 ;
	}
	else if(basic_salary > 20000)
	{
		HRA = basic_salary * 0.3 ;
		DA = basic_salary * 0.95 ;
	}
	
	gross_salary = basic_salary + HRA + DA;
	
	printf("The Gross Salary of the employee is = %0.2lf\n",gross_salary);
	
	return 0;
}
