#include<stdio.h>
void main()
{
 int n,n2,n3;
 char name[40];
 float np=0,A=0,I=0;
 printf("Enter a customer name\n");
scanf("%s",name);
printf("Enter no of consumed unit\n");
 scanf("%d",&n);
 if(n<=200)
 {
  np=n*0.8;
 }
else if(n>200 && n<=300)
     {
      n2=n-200;
      np=n2*0.9+160;
     }
   else if(n>300)
        {
        n3=n-300;
        np=n3*1+250;
        }
if(np>400)
{
 I=np*15/100;
 A=I+np+100;
}
else {
 A=np+100;
}
printf("*****ELECTRICITY BOARD*****\n");
printf("CUSTOMER NAME: %s\n",name);
printf("NUMBER OF UNITS CONSUMED: %d\n",n);
printf("UNIT CHARGES:%.2f\n",np);
printf("SUBCHARGES:100\n");
printf("ADDITIONAL SUBCHARGES:%.2f\n",I);
printf("TOTALE CHARGES: %.2f",A);
}
     
 