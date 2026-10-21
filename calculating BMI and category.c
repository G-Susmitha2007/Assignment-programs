#include <stdio.h>
void main()
{
 float weight,height,BMI;
 printf("\n Enter weight,height");
 scanf("\n%f%f",&weight,&height);
 BMI=weight/(height*height);
 printf("\n%f is BMI",BMI);
 if(BMI<18.5)
 {
 printf("\nunderweight");
 }
  else if(BMI>=18.5 && BMI<=25)
 {
 printf("\nNormal");
 }
 else if(BMI>=25 && BMI<=30)
 {
 printf("\nOverweight");
 }
else if(BMI>=30)
 {
 printf("\nObese");
 }

}
