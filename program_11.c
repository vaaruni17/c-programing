//Calculate the factorial of a non-negative integer and generate the Fibonacci series for a specified number of terms. 
#include <stdio.h> 
int main ()
{
int n, i;
int factorial =1;
int terms ;
int first-o, Selond = 1, next; 
//factorial callutation. 
clrscr();
 Printf("Enter a nen-negative inteyer: "); 
 Stanf("%d", &n);
  if (n<0)
  {
  Printf("Factorial is not defind for negative sumbers. \n");
}  
  else if (n<20) 
  {
  Printf("Number is too large to Calculate factorial \n");
}
else
{
  for (i=1; i <= n; i++)
  {
   factorial=factorial*i;
   Printf ("faltorial of %d = %d \n",n, factorial);
// Fibonacci Series generation.
 Printf("Enter the number of terms. ").
  scanf("%d",&terms);
if (terms <=0)
{
Printf("Enter a Positrus number of terms In);
}
else
{
 Printf(fibonacci-Series:");
 for (i=1;i<= teams;i++)
{
 Printf ("%d", first);
 next = First & second;
 first = second;
Second = next;
}
}
getch();
return 0;
}