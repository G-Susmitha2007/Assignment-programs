#include <stdio.h>
void main()
{
 int age, mi, cs;
//mi=monthly income and cs=credit score
printf("Enter age, mi, cs");
scanf("%d%d%d", &age, &mi, &cs);
 if(age<21 || age>60)
 {
printf("Loan rejected:age not in 21 to 60");
}
 else if(mi<25000)
 {
printf("Loan rejected:mi below 25000");
}
else if(cs<700)
{
printf("Loan rejected:cs below 700");
}
else
{
printf("Loan approved");
}
}