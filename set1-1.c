#include<conio.h>
#include<conio.h>
void main()
{
char s[20];
int l,i;
clrscr();
printf("enter the string");
scanf("%s",s);
l=strlen(s);
for(i=1;i>=0;i--)
{
printf("%c",s[i]);
}
getch();
}
