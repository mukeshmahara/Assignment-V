#include<stdio.h>
#include<conio.h>
void div(int a){
	
	
	printf("The entered number is divisible by 5 and 7");
	}
	void nodiv(int a){
	printf("The entered number is divisible of 5 and  7");
}
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%5==0&&a%7==0){
		div(a);
}
else 
nodiv(a);
getch();
return 0;
}
