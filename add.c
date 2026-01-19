#include <stdio.h>
 int main(){
     char name [40]= "Umuhire Liza Belinda";
     char def [100];
     int r;
     double pi;
     float c;
     printf("My name is %s and i am going to ask you questions \n",name);

     printf("what is circumference:\n");
     scanf(" %[^\n]",def);
     getchar();

     printf("enter the integer number for radius:\n");
     scanf("%d",&r);

     printf("enter the double number for pi:\n");
     scanf("%lf",&pi);

     printf("YOUR ANSWERS ARE: circumference is %s  , radius is %d and  pi is %lf .",def,r,pi);
     return 0;


        }
