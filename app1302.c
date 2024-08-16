#include<stdio.h>
int main (void)
{
    char str [20];
    printf("Enter text:");
    gets (str);
    //scanf("%s", &str);
    printf ("Output: str %s\n", str);
    return (0);
}