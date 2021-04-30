/*
  Binoy Das Gupta
  C program to check whether a character is uppercase or lowercase alphabet.
  01-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable
	char ch;
	
	//taking input 
	printf("Enter an alphabet = ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("The entered alphabet is an uppercase alphabet\n");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("The entered alphabet is a lowercase alphabet\n");
	}
	else 
	{
		printf("Invalid input\n");
	}
	
	return 0;
}
