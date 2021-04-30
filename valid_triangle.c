/*
  Binoy Das Gupta
  C program to input angles of a triangle and check whether triangle is valid or not.
  02-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int ang1,ang2,ang3,ang;
	
	//taking input
	printf("Enter the angles = ");
	scanf("%d %d %d",&ang1,&ang2,&ang3);
	
	ang = ang1 + ang2 + ang3;
	
	if(ang1>0 && ang2>0 && ang3>0 && ang == 180)
	{
		printf("The angles form a triangle\n");
	}
	else 
	{
		printf("The angles form an invalid triangle\n");
	}
	
	return 0;
}

