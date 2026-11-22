//Accept marks in five subjects, each carrying 100 marks. Calculate total and percentage. 
//Declare the student failed when the mark in any subject is below 35; 
// otherwise classify the result as Distinction (75 and above), 
//First Class (60 to below 75), 
//Second Class (50 to below 60) or Pass Class (35 to below 50).
#include <stdio.h>
void main() {
int marks[5], total = 0, i, failed = 0;
float percentage;
for (i = 0; i < 5; i++) {
clrscr();
printf("Enter marks for subject %d (0-100):\n",i + 1);
scanf("%d", &marks[i]);
if (marks[i] < 0 || marks[i] > 100) {
printf("Invalid marks. Enter values from 0 to 100.\n");
return;
}
total += marks[i];
if (marks[i] < 35)
failed = 1;
 }
 percentage = total / 5.0;
 printf("Total = %d / 500\n", total);
 printf("Percentage = %.2f%%\n", percentage);
 if (failed)
  printf("Result: Fail\n");
 else if (percentage >= 75)
 printf("Result: Distinction\n");
 else if (percentage >= 60)
 printf("Result: First Class\n");
else if (percentage >= 50)
printf("Result: Second Class\n");
  else
 printf("Result: Pass Class\n");
 getch();
 }