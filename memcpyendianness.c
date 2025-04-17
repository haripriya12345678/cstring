/*#include<stdio.h>
#include<string.h>
#define max 50
int main()
{
       char input_source[max]="starting of a embedded course";
       char copied_value[max]="compeletion embedded  course";
       printf("Before_copy:%s\n",input_source);
       memcpy(copied_value,input_source,sizeof(input_source));
       printf("After_copy:%s\n",copied_value);
       return 0;
}
void *memcpy(void *dest,const void *src,size_t n)
{
    char *d =(char *)dest;
    const char *s=(const char *)src;
    for(size_t i=0;i<n;i++)
    {
        d[i]=s[i];
    }
    return dest;
}*/

/*#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

char input_source[MAX_LEN] = "starting of a embedded course";
char copied_value[MAX_LEN] = "compeletion embedded  course";

void *memcpy(void *dest, const void *src, size_t count) {
    char *d = (char *)dest;
    const char *s = (const char *)src;
    for (size_t i = 0; i < count; i++) {
        d[i] = s[i];
    }
    return dest;
}

int main(void) {
    printf("Before_copy is \"%s\"\n", copied_value);
    memcpy(copied_value, input_source, sizeof(input_source));
    printf("After_copy \"%s\"\n", copied_value);

    return 0;
}*/


#include <stdio.h>
#include <string.h>

#define MAX 50

void *memcpy(void *dest, const void *src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

int main() {
    char input_source[MAX] = "Starting of embedded course";
    char copied_value[MAX] = "Completion of embedded course";

    printf("Before copy:\n");
    printf("Input Source: %s\n", input_source);
    printf("Copied Value: %s\n", copied_value);

    memcpy(copied_value, input_source, strlen(input_source) + 1);

    printf("\nAfter copy:\n");
    printf("Input Source: %s\n", input_source);
    printf("Copied Value: %s\n", copied_value);

    return 0;
}


