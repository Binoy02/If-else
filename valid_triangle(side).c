/*
  Binoy Das Gupta
  C program to check whether triangle is valid or not if sides are given
  02-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables 
	int s1,s2,s3;
	
	//taking inputs
	printf("Enter the sides : \n");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if((s1+s2>s3) && (s2+s3>s1) && (s1+s3>s2))
	{
		printf("Triangle is valid\n");
	}
	else
	{
		printf("Triangle is not valid\n");
	}
	
	return 0;
}
