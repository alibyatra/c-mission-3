#include <stdio.h>
#include "txtfind.h"
#define WORD 30
#define Line 256

int main(){

    char str [WORD];
    getWord(str);
    char c;
    scanf(" %c",&c);

    if(c == 'a'){
    print_lines(str);
    }

    if(c == 'b'){
    print_similar_words(str);
    }
}