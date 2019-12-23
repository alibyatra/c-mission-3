#include <stdio.h>
#include "txtfind.h"
#include <string.h>
#define LINE 256
#define WORD 30

int getLine(char s[])
{
char c= getchar();
int count=0;
*(s)= c;
count++;
while ((c!='\n') && (count!=LINE)){        
    c = getchar();
    count++;
    *(s+count)=c;
}
*(s+count+1)='\0';
printf("%d",count);
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
if (strlen(str2)>strlen(str1))
{
    return 0;
}
int i=0, j=0;
int count = 0;
    for (i ; i < strlen(str1) - strlen(str2); i++)
    {
        count=0;
        j=0;
        for (int k=i; j < strlen(str2) ; j++, k++)
        {
            if(str1[k] == str2[j])
                count++;
          if(count == strlen(str2))
            return 1;
        }
    }
  
     return 0;
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

void print_lines(char *str){

    char line [LINE];
    int length=0;
    while(length!=EOF){
        length = getLine(line);
 
        if(subString(line,str)){
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
