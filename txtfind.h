#ifndef txtfind_h
#define txtfind_h

int getLine(char s[]);
int getword(char w[]);
int substring(char *str1, char *str2);
int similar (char *s, char *t, int n);
void print_lines(char *str);
void print_similar_words(char *str);

#endif