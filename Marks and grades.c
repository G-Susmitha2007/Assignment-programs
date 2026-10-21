#include <stdio.h>
void main()
{
 int n;
 printf("\n Enter n");
 scanf("\n%d",&n);
 if(n>=90 && n<=100)
 {
 printf("\n The grade is o");
 }
  else if(n>=80 && n<=89)
 {
 printf("\n The grade is A+");
 }
 else if(n>=70 && n<=79)
 {
 printf("\n The grade is A");
 }
else if(n>=60 && n<=69)
 {
 printf("\n The grade is B");
 }
else if(n>=50 && n<=59)
 {
 printf("\n The grade is c");
 }
else if(n<50)
 {
 printf("\n The mark is considered as fail");
 }
 else if(n<0 || n>100)
 {
 printf("\n Invalid mark");
 }
}
