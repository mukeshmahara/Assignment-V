#include <stdio.h>
#include<conio.h>

int main(){
int anyNum,mod,div;
printf("Enter a decimal number : ");
scanf("%d",&anyNum);
div=anyNum;
int sum=0;
int mul = 1;
do{
    mod=div%2;
    div=div/2;
    sum=sum+mod*mul;
    mul=mul*10;
}while(div>0);
printf("The binary naumber for %d is %d",anyNum,sum);
getch();
return 0;
}
