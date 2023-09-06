#include<stdio.h>
int main(){
	int units;
	printf("Cost of 1 unit electricity is rs2.50\n");
	printf("Total units used:");
	scanf("%d",&units);
	int amt= 2.50*units;
	printf("Total bill amount: Rs%d",amt);
}