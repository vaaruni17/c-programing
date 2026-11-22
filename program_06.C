//Use a switch statement to perform addition, subtraction, multiplication, division or remainder on two integers. 
#include<stdio.h>
void main(){
int a,b,choice;
clrscr();
printf("Enter two  numbers \n");
scanf("%d %d",&a,&b);
printf("\n 1. addition \n");
printf(" 2. substaraction \n");
printf(" 3. multiplicattion \n");
printf(" 4. Division \n");
printf(" 5. Reminder \n");
printf(" enter your choice ; \n");
scanf("%d", &choice);
switch(choice){
case 1 :
printf ("sum of %d and %d is %d", a,b,(a+b));
break;
case 2:
printf ("subtraction of %d and %d is %d", a,b,(a-b));
break;
case 3:
printf ("multiplication  of %d and %d is %d", a,b,(a*b));
break;
case 4:
printf ("division of %d and %d is %d", a,b,(a/b));
break;
case 5:
if ( b!=0)
printf("remander=%d\n",a%b);
else
printf ("remander by zero is not allowd.\n");
break;
printf("Invalid choice\n");
}
getch();
}



