#include <stdio.h>
#include <string.h>
int fact(int);
main()
{
int x=5;
printf("FACTORIAL IS%d",fact(x));
}
int fact(int i)
{
    if(i==1)
    return 1;
    else
    return i*fact(i-1);
}
