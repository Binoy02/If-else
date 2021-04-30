/*
  Binoy Das Gupta
  C program to find all roots of a quadratic equation.
  07-04-2021
*/

#include<stdio.h>
#include<math.h>
int main()
{
	// declaring variables
	double a,b,c,d,x1,x2,imaginary; // a,b = co-efficients of x^2, x ; c = constant ; d = discriminant ; x1,x2 = roots of quadaratic equation
	
	// taking inputs
	printf("Enter a, b, c :\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	d = b*b - 4*a*c ;
	
	if(d>0)
	{
		x1 = (-b/(2*a)) + sqrt(d)/(2*a);
		x2 = (-b/(2*a)) - sqrt(d)/(2*a);
		printf("The real roots of the quadratic equation are : %0.2lf , %0.2lf\n",x1,x2);	
	}
	else if(d<0)
	{
		x1 = x2 = (-b/(2*a));
		imaginary = sqrt(-d)/(2*a);
		printf("The complex roots of the quadratic equation are : %0.2lf+i%0.2lf , %0.2lf-i%0.2lf\n",x1,imaginary,x2,imaginary);
	}
	else if(d==0)
	{
		x1 = x2 = (-b/(2*a)); 
		printf("The roots of the quadratic equation are : %0.2lf , %0.2lf\n",x1,x2);
	}
	else
	{
		printf("Invalid input!\n");
	}
	
	return 0;
}
