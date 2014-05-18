#include <stdio.h>
#include <string.h>
int fact(int);
main()
{
int x;
for(x=1;x<=10;x++ )
printf("%d \t ",fact(x));
}
int fact(int i)
{
    if(i==1)
    return 0;
    else
    if(i==2)
    return 1;
    else
    return fact(i-1)+fact(i-2);
}
