/*
  Binoy Das Gupta
  C program to check whether the triangle is equilateral, isosceles or scalene triangle.
  06-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int side1,side2,side3;
	
	//taking inputs
	printf("Enter the sides of triangle :\n");
	scanf("%d %d %d",&side1,&side2,&side3);
	
	/*
	condition of equilateral triangle : side1 = side2 = side3
	condition of isosceles triangle   : side1 = side2 or, side2 = side3 or, side3 = side1
	condition of scalene triangle     : side1 != side2 and, side2 != side3 and, side3 != side1
	*/
	
	if(side1 == side2 == side3)
	{
		printf("The entered sides indicate Equilateral triangle\n");
	}
	else if(side1 == side2 || side2 == side3 || side3 == side1)
	{
		printf("The entered sides indicate Isosceles triangle\n");
	}
	else if(side1 != side2 && side2 != side3 && side3 != side1)
	{
		printf("The entered sides indicate Scalene triangle\n");
	}
	else
	{
		printf("Invalid sides!\n");
	}
	
	return 0;
}
