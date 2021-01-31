#include<stdio.h>

void swap(char *a,char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int rev(char arr[],int size, int i)
{
    if(i == (size+1)/2)
        return 0;
    else
    {
        swap(&arr[i],&arr[size-i]);
        rev(arr,size,i+1);
    }
}

void reverseString(char* s, int sSize){
    if(s!=NULL)
    rev(s,sSize-1,0);
}
int main()
{
    char arr[5];
    scanf("%s",&arr);
    reverseString(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}