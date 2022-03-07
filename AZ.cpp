#include<stdio.h>
#include<conio.h>
int main()
{ char n,a;
printf("enter the value of a");
scanf("%d",&a);
for(n=65;n<=a;n++)
{printf("%d=%c\n",n,n);
}
return 0;
}
