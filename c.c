#include<stdio.h>
int main()
{
 int m,t,w,c,im,iw;
float p,d;
t=1441981744;
w=t*484/100;
m=t-w;
printf("\n total number of women w=%d",w);
printf("\n total number of men m=%d",m);
p=100-85.95;
printf("\n illeterate rate of men=%f",p);
im=p/100*m;
d=100-62.84;
printf("\n illeterate rate of women=%f",d);
iw=d/100*w;
printf("\n no of");
return 0;
}
