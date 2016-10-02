#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesar(int key)
{
    char p[100];
    int i,enc;
    if(key>26)
      key=key % 26;
      
    printf("Enter the sentence\n");
    while((i=getchar()) != '\n')
    {
           p[i]=tolower(p[i]);
           enc=((int)p[i] - 97 + key) % 26;
           printf("%c",enc + 97);
    }
    
}

void caesarDecrypt(int key, char * p){
    int i;
    char dec [100];
    for(i=0; i =< strlen(p); i++)
        dec[i]=("%c", (((int)p[i] - 71 - key) %26) + 97);
    printf("%s \n", dec);
}

int main()
{
char *p = "krod";
caesarDecrypt(3,p);
}

