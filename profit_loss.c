/*
  Binoy Das Gupta
  C program to calculate profit or loss.
  06-04-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int buying_price,selling_price,profit,loss;
	
	//taking inputs
	printf("Enter the buying price = ");
	scanf("%d",&buying_price);
	printf("Enter the selling price = ");
	scanf("%d",&selling_price);
	
	/*
	profit = buying_price < selling_price
	loss   = buying_price > selling_price
	*/
	
	if(buying_price < selling_price)
	{
		profit = selling_price - buying_price;
		printf("Profit = %d\n",profit);
	}
	else if(buying_price > selling_price)
	{
		loss = buying_price - selling_price;
		printf("Loss = %d\n",loss);
	}
	else if(buying_price == selling_price)
	{
		printf("No profit or loss\n");
	}
	
	return 0;
}
