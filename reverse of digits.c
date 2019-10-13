#include <stdio.h>
main()
{
printf("write a five digit number\n");
int num5,d1,d2,d3,d4,d5;
scanf("%d",&num5);
d1 = num5/10000;
d2 = (num5/1000)-(d1*10);
d3 = (num5/100)-(d1*100+d2*10);
d4 = (num5/10)-(d1*1000+d2*100+d3*10);
d5 = num5-(d1*10000+d2*1000+d3*100+d4*10);
printf("sum of digits is = %d\n",d1+d2*10+d3*100+d4*1000+d5*10000);
}
