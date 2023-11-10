#include<stdio.h>
int main()
{
    char s1[]="my name is";
    char s2[] = "moinul islam";
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("strings are equal\n");

    }
    else
        printf("strings are not equal\n");

}
