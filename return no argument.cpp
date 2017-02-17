#include<stdio.h>
#include<conio.h>
int div(){
	int a,m=0;	
	printf("enter a number");
	scanf("%d",&a);
	if(a%5==0&&a%7==0){
		m=1;
	}
	return m;
}
int main(){
	int n;

	n=div();
	if(n==1){
		printf("the number is  divisible by 5 and 7");
		
	}
	else
	printf("the number is not divisible by 5 and 7");
}
