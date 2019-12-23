#include <stdio.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30

int main()
{
    char str [WORD];
    getword(str);
    char activity;
    switch (scanf("%c",&activity))
    {
    case 'a':
        print_lines(str);
        break;
    case 'b':
        print_similar_words(str);
        break;
    default:
    printf("Eror, No commend found: %c\n", activity);
        break;
    }
}