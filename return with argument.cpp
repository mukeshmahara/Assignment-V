#include<stdio.h>
#include<conio.h>
int div5(int a){
	return a%5;
}
int div7(int a){
	return a%7;
}

int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(div5(a)==0&&div7(a)==0){
		printf("the number is divisible by 5 and 7");
		
	}
	else
	printf("the number is not divisible by 5 and 7")
	;
	return 0;
	getch();
}
