#include<stdio.h>
int main(){
	int num1,num2;
	char operations;
    printf("Enter 1st operand:");
    scanf("%d",&num1);
    printf("Enter 2nd operand:");
    scanf("%d",&num2);
    printf("Choose the operation: +, -, *, /\n");
    scanf(" %c",&operations);
    switch(operations)
    {
    	case '+':
    		printf("%d + %d = %d.",num1,num2,num1+num2);
    	    break;
    	case '-':
    		printf("%d - %d = %d",num1,num2,num1-num2);
    		break;
    	case '*':
    		printf("%d * %d = %d",num1,num2,num1*num2);
    		break;
    	case '/':
    		printf("%d / %d = %d",num1,num2,num1/num2);
    		break;
    	default:
    		printf("Enter the correct operand.");
    		break;
    }
    return 0;
}