#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int value=0x12345678;
    char *address=(char *)&value;
    for(int i=0;i<4;i++)
    {
        printf("address of the value[%d]: %d\n",i,&address[i]);
    }
    return 0;
}
