#include<stdio.h>
#include<conio.h>
void div(){
	printf("the Entered number is divisible by 5 and 7");
}
void nodiv(){
	printf("THe enterd number is not divisible by 5 and 7");
	}
int main(){
	int a;
	printf("Enter a numbers");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
		div();
		//printf("\n");	
	else
		nodiv();
	
	getch();	
	}
