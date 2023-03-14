#include<stdio.h>
int main()
{
   float total_credit =19, cgpa, econ, stat, math, phy;
   float digital_elect, digital_elect_lab, oop, oop_lab;

   printf("Economics mark is: ");
   scanf("%f", &econ);

   printf("Statistics mark is: ");
   scanf("%f", &stat);

   printf("Mathematics mark is: ");
   scanf("%f", &math);

   printf("Physics result is: ");
   scanf("%f", &phy);

   printf("Digital Electronics mark is: ");
   scanf("%f", &digital_elect);

   printf("Digital Electronics Lab mark is: ");
   scanf("%f", &digital_elect_lab);

   printf("Object Oriented Programming mark is: ");
   scanf("%f", &oop);

   printf("Object Oriented Programming Lab mark is: ");
   scanf("%f", &oop_lab);


   cgpa = (econ*2 + stat*2 + math*3 + phy*3 + digital_elect*3 + digital_elect_lab*1
                   + oop*3 + oop*2)/total_credit;



   printf("Your result is: %f",cgpa);


    return 0;
}
