/*
  Binoy Das Gupta
  C program to count total number of notes in given amount.
  07-04-2021
*/

#include<stdio.h>
#include<math.h>
int main()
{
	//declaring variables
	int amt;
	int n500,n100,n50,n20,n10,n5,n2,n1;
	
	/* Initialize all notes to 0 */
    n500 = n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;// variables are initialized to 0 because in this program using if-else the declared variables hold some garbage value and to get the correct output the declared variables are assigned 0
	
	//taking inputs
	printf("Enter the amount : ");
	scanf("%d",&amt);
	
	if(amt >= 500)
	{
		n500 = amt/500;
		amt = amt - (500*n500);
	} 
	if(amt>=100)
	{
		n100 = amt/100;
		amt = amt - (100*n100);
	}
	if(amt>=50)
	{
		n50 = amt/50;
		amt = amt - (50*n50);
	}
	if(amt>=20)
	{
		n20 = amt/20;
		amt = amt - (20*n20);
	}
	if(amt>=10)
	{
		n10 = amt/10;
		amt -= (10*n10);
	}
	if(amt>=5)
	{
		n5 = amt/5;
		amt = amt - (5*n5);
	}
	if(amt>=2)
	{
		n2 = amt/2;
		amt-= (2*n2);
	}
	if(amt>=1)
	{
		n1 = amt/1;
		amt -= (1*n1);
	}

	printf("Notes in the given amount : \n");
	printf("500 = %d\n",n500);
	printf("100 = %d\n",n100);
	printf("50  = %d\n",n50);
	printf("20  = %d\n",n20);
	printf("10  = %d\n",n10);
	printf("5   = %d\n",n5);
	printf("2   = %d\n",n2);
	printf("1   = %d\n",n1);

	return 0;
}
