#include<stdio.h>
#include<string.h>
#define max 20
int main()
{
    char *argv[max]={"it","is","a","application"};
    char *address=(char *)&argv;
    int i;
    int argc;
    printf("Enter the argc:");
    scanf("%d",&argc);
    for(i=0;i<argc;i++)
    {
        printf("%s\t\n",*(argv+i));
    }
    for(i=0;i<argc;i++)
    {
        printf("The arguments %s: %p\n",argv[i],(void *)argv[i]);
    }
    return 0;
}

