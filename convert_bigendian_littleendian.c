#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int hex_value=0x12345678;
   unsigned  char *ptr_value=(unsigned char *)&hex_value;
    int a=1,check;   
    printf("enter the checking value:");//
    scanf("%d",&check);//
    if(*(char *)&a == check)
    {
    for(int i=0;i<sizeof(hex_value);i++)
    {

        printf("Big_Endian: % X\n",ptr_value[i]);
    }
}
    else
    {
        for(int i=3;i>=0;i--)
        {
            printf("little_endian: %x\n",ptr_value[i]);
        }
    }

return 0;
}