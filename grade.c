/*
  Binoy Das Gupta
  C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
  Calculate percentage and grade according to following:
[ Percentage >= 90% : Grade A
  Percentage >= 80% : Grade B
  Percentage >= 70% : Grade C
  Percentage >= 60% : Grade D
  Percentage >= 40% : Grade E
  Percentage < 40%  : Grade F ]
  08-04-2021
*/

#include<stdio.h>
int main()
{
	// declaring variables
	int marks_phy, marks_chem, marks_bio, marks_math, marks_compt;
	double marks_total;
	
	// taking inputs
	printf("Enter the marks of Physics, Chemistry, Biology, Mathematics, Computer :\n");
	scanf("%d %d %d %d %d",&marks_phy,&marks_chem,&marks_bio,&marks_math,&marks_compt);
	
	marks_total = (marks_phy + marks_chem + marks_bio + marks_math + marks_compt)/5;
	
	printf("Percentage = %0.2lf\n",marks_total);
	
	if(marks_total >= 90)
	{
		printf("Grade A\n");
	}
	else if(marks_total >= 80)
	{
		printf("Grade B\n");
	}
	else if(marks_total >= 70)
	{
		printf("Grade C\n");
	}
	else if(marks_total >= 60)
	{
		printf("Grade D\n");
	}
	else if(marks_total >= 40)
	{
		printf("Grade E\n");
	}
	else if(marks_total < 40)
	{
		printf("Grade F\n");
	}
	
	return 0;
}
