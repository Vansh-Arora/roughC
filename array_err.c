#include<stdio.h>
int main( )
{
int num[40], i ;
for ( i = 0 ; i <= 100 ; i++ )
num[i] = i ;
printf("%d",num[39]);
printf("%d",num[101]);
return 0;
} 