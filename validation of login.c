#include <stdio.h>
void main()
{
 int UID,p;
//user id=UID,password=p
printf("Enter UID,p");
scanf("%d%d",&UID,&p);
 if(UID!=101)
 {
printf("\nuser not found");
}
 else if(p!=4321)
 {
printf("Incorrect password");
}
else
{
printf("Login successful");
}
}