#include <stdio.h>

int main() {
   float num1, num2, num3, largest;

   // take input from the user
   printf("Enter the first number: ");
   scanf("%f", &num1);
   printf("Enter the second number: ");
   scanf("%f", &num2);
   printf("Enter the third number: ");
   scanf("%f", &num3);

   // compare the numbers using if-else statements
   if (num1 > num2 && num1 > num3)
      largest = num1;
   else if (num2 > num1 && num2 > num3)
      largest = num2;
   else
      largest = num3;

   // print the largest number
   printf("The largest number is %.2f", largest);

   return 0;
}