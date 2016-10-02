#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesar(int key, char * p)
{
    char enc [100];
    for(int i=0; i < strlen(p); i++)
        enc[i]=("%c" , (((int)p[i] - 'a' + key) % 26) + 'a');
    enc[strlen(p)] = 0;
    printf("%s \n", enc);
    printf("%s \n", p);
    
}

void caesarDecrypt(int key, char * p){
    char dec [100];
    for(int i=0; i < strlen(p); i++)
        dec[i]=("%c", (((int)p[i] - 71 - key) %26) + 'a');
    printf("%s \n", dec);
}

int main()
{
char *p = "hola";
caesar(3, p);
}

