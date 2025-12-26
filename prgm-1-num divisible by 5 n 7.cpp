/*1. Program to find whether a number is completely divisible by both 5 and 7 or only 
divisible by any one of them, or not divisible by any.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r1,r2;
	printf("Enter a number:");
	scanf("%d",&n);
	r1=n%5;
	r2=n%7;
	
	if(r1==0&&r2==0){
		printf("The number is divisible by both 5 and 7.");
	}
	else if(r1==0&&r2!=0){
		printf("The number is divisible by 5 only.");
	}
	else if(r2==0&&r1!=0){
		printf("The number is divisible by 7 only.");
	}
	else{
		printf("The number is not divisible by neither 5 nor 7.");
	}
	
	getch();
	printf("\n\n-Thank you-");
	getch();
	return 0;
}

