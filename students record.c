#include <stdio.h>
int main ()
{

   char Regnumber[15];
   char Firstname[10];
   char Lastname[10];
   float Introprog;
   float Netwrk;
   float Accnt;
   float OS;
   float CompApp;

   printf("\nEnter RegNumber\n");
   scanf("%s",&Regnumber);

   printf("\nFirstname\n");
   scanf("%s",&Firstname);

   printf("\nEnter Lastname\n");
   scanf("%s",&Lastname);

   printf("\nEnter Introprog\n");
   scanf("%f",&Introprog);

   printf("\nEnter Netwrk\n");
   scanf("%f",&Netwrk);

   printf("\nEnter Accnt\n");
   scanf("%f",&Accnt);

   printf("\nEnter OS\n");
   scanf("%f",&OS);

   printf("\nEnter CompApp\n");
   scanf("%f",&CompApp);


   printf("\nRegnumber%s\n", Regnumber);
   printf("\nFirstname%s\n", Firstname);
   printf("\nLastname%s\n", Lastname);
   printf("\nIntroprog%f\n", Introprog);
   printf("\nNetwrk%f\n", Netwrk);
   printf("\nAccnt%f\n",  Accnt);
   printf("\nOS%f\n", OS);
   printf("\nCompApp%f\n", CompApp);

return 0;

}
