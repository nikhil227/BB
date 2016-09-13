#include<stdio.h>
#include<math.h>
int main()
{
int no1,no2,fdigit1,fdigit2,ldigit1,ldigit2,count1,count2,a,b;
printf("enter two no.s");
scanf("%d%d",&no1,&no2);
fdigit1=no1;
fdigit2=no2;
ldigit1=no1%10;
ldigit2=no2%10;
count1=0;
count2=0;
while(fdigit1>10)
{
fdigit1=fdigit1/10;
count1=count1+1;
}
while(fdigit2>10)
{
fdigit2=fdigit2/10;
count2=count2+1;
}
count1=pow(10,count1);
a=no1-(no1/count1)*count1;
no1=ldigit2*count1+a;
no1=no1/10;
no1=no1*10 + fdigit2;
count2=pow(10,count2);
b=no2-(no2/count2)*count2;
no2=ldigit1*count2+b;
no2=no2/10 ;
no2=no2*10 + fdigit1;
printf("the nos. with swapped digits are %d %d",no1,no2);
return 0;
}
