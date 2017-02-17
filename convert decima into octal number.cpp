#include <stdio.h>
#include <conio.h>

int main(){
  int anyNum;
  printf("Enter decimal number : ");
  scanf("%d",&anyNum);
  int a = 1;
  int oct=0;
  while(anyNum>0){
        int mod=anyNum%8;
        anyNum=anyNum/8;
        oct=oct+mod*a;
        a=a*10;
        }
   printf("The octal number is %d.",oct);
   return 0;
   getch();
}
