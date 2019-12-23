#include <stdio.h>
#include "txtfind.h"
#include <string.h>
#define LINE 256
#define WORD 30

int getLine(char s[])
{
char c=getchar();
int count=0;
*(s)= c;
while ((c!='\n') && (c!=EOF) && (c!='\0'))
    {
    count++;
    c=getchar();
    *(s+count)=c;
    }
*(s+count)='\0';
if (c == EOF)
return EOF;
else return count;
}

int getword(char w[])
{
char c=getchar();
int count=0;
*(w)= c;
while ((c!='\n') && (c!=EOF) && (c!='\0') && (c!='\t') && (c!=' '))
    {
    count++;
    c=getchar();
    *(w+count)=c;
    }
*(w+count)='\0';
if (c == EOF)
return EOF;
else return count;
}

int substring(char *str1, char *str2)
{
if (str2>str1)
{
    return 0;
}
int i=0, j=0;
int count = 0;
while(str1[i] != '\0' && str2[j] != '\0')
{
    for (; i < strlen(str1); i++)
    {
        count=0;
        for (int k=i; j < strlen(str2); j++, k++)
        {
            if(str1[k] == str2[j])
            count++;
        }
    }
    if (count == 0)
    return 0;
    else return 1;
}
}

int similar (char *s, char *t, int n)
{
    for (size_t i = 0, j=0; ((*(s+i) != '\0') || (*(t+j) != '\0')); i++)
    {
       if (*(s+i) == *(t+j))
       {
           j++;
       }
       else
       {
           n--;
       }
    }
    if (n==0)
    return 1;
    else return 0;
}

void print_lines(char *str)
{
int length = 0;
char line [LINE];
while (length != EOF)
{
    length = getLine(line);
    if (substring(line,str)== 1)
    {
        printf("%s \n",line);
    }
}
}

void print_similar_words(char *str)
{
int length =0;
char word [WORD];
while (length != EOF)
{
    length = getword(word);
    if ((similar(word, str, 0)) || (similar(word, str, 1)))
    {
        printf("%s \n",word);
    }
}
}