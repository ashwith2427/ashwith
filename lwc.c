#include<stdio.h>
#include<string.h>
void main()
{
	int i,c,words=0,lines=0,chars=0;
	char a[100],ch;
	printf("Enter the string u want to input\n");
	printf("Enter two times to stop your input\n");
	scanf("%[^.]",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='\n'||a[i]=='.')
		{
			++lines;
			words++;
		}
		else if(a[i]!=' '&&a[i]!='\n')
		{
			chars++;
		}
		else
		{
			if(a[i]==' ')
			{
				words++;
			}
		}
	}
	printf("no of words are %d\n",words);
	printf("no of lines are %d\n",lines);
	printf("no of characters are %d",chars);
}
