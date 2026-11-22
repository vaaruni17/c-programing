//Determine whether a given year is a leap year using the rules for divisibility by 4, 100 and 400.
 #include <stdio.h>   
 void main() 
 {    
 int year; 
 clrscr(); 
 printf("Enter a year: ");     
 scanf("%d", &year);      
 if (year <= 0) {         
 printf("Enter a positive year.\n"); 
 } else if (year % 400 == 0) {         
 printf("%d is a leap year.\n", year);     
 } else if (year % 100 == 0) {         
 printf("%d is not a leap year.\n", year);    
 } else if (year % 4 == 0) {        
 printf("%d is a leap year.\n", year);    
 } else {         
 printf("%d is not a leap year.\n", year);    
  }       
 getch();
} 