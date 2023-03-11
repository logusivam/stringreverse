#include<stdio.h>
#include<conio.h>
main()
{
	static char s[15];
	int i;
	puts("Enter the string:");
	gets(s);
	puts("\nReverse string:");
	for(i=15;i>=0;i--)
	printf("%c",s[i]);
}
