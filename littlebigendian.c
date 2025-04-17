#include<stdio.h>
#include<string.h>
int main()
{
   unsigned int a=0x1;
    char *r=(char *)&a;
    if(*r==1)
    {
        printf("it is little_endian");
    }
    else
    {
        printf("it is big_endian");
    }
}