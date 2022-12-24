#include<stdio.h>
int main(void)
{
    int *p, i,j;

    p=&i;
    i=1;

    printf("%d\n",i);
    printf("%d\n",p);
    *p=2;

    printf("%d\n",i);
    printf("%d\n",*p);

}
