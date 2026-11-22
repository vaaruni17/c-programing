// Accept two integers and display their sum, difference, product, quotient and remainder.
// Verify that the second integer is not zero before performing division or remainder operations.
#include <stdio.h>  
 void main()
 { 
 int a, b;
 clrscr();
 printf("Enter two integers: "); 
 scanf("%d %d", &a, &b);
 printf("Sum = %d\n", a + b);
 printf("Difference = %d\n", a - b); 
 printf("Product = %d\n", a * b);
 if (b != 0) {
 printf("Quotient = %d\n", a / b);
 printf("Remainder = %d\n", a % b);
 } else { 
 printf("Division and remainder are not possible when the second integer is zero.\n"); 
 }    
 getch();
 } 