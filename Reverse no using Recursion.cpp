/*
* C Program to reverse the digits of a number using recursion
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int getReversedNumber(int number);
int main(){
    int number, reverse = 0;
    printf("Enter a number\n");
    scanf("%d", &number);
     
    reverse = getReversedNumber(number);
     
    printf("Reversed number : %d\n", reverse);
    getch();
    return 0;
}
 
/*
 * Function to reverse the digits of a number
 */
int getReversedNumber(int number){
    int lastDigit, numberOfDigits, sign = 1;
     
    if(number < 0){
        number = number * -1;
        sign = -1;
    }
    if(number < 10)
        return number*sign;
         
    lastDigit = number % 10;
    number = number / 10;
    /* log10(number) + 1 gives number of digits in number */
    numberOfDigits = log10(number) + 1;
    /*
     * for Example: getReversedNumber(1234) = 
     *        ((4*1000) + getReversedNumber(321))*1 
     */
    return (lastDigit*pow(10,numberOfDigits) + 
               getReversedNumber(number))*sign;
}

