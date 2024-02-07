#include<stdio.h>
int main ()
{
char s[30];
char f[20];
printf("Enter the string? ");
printf("Enter text:");
fgets(f,  sizeof(f), stdin);
gets(s);
printf("You entered %s",s);
return 0;
}