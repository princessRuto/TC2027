#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encCaesar(int key, char * p)
{
    char enc [100];
    for(int i=0; i < strlen(p); i++)
        enc[i]=("%c" , (((int)p[i] - 'a' + key) % 26) + 'a');
    enc[strlen(p)] = 0;
    printf("%s \n", enc);
    printf("%s \n", p);
    
}

void decCaesar(int key, char * p){
    char dec [100];
    for(int i=0; i < strlen(p); i++)
        dec[i]=("%c", (((int)p[i] - 71 - key) %26) + 'a');
    printf("%s \n", dec);
}

void encVignere (char * key, char * p){
    int count, countkey;
    char result [100];
    for(int i=0; i < strlen(p); i++){
        count = (int)p[i] - 'a';
        countkey = (int)key[i % strlen(key)] - 'a';
        result[i] = ("%c", ((count + countkey) % 26) + 'a');
    }
    result[strlen(p)]=0;
    printf("%s\n",result);
}

void decVignere (char * key, char * p){
    int count, countkey;
    char result [100];
    for(int i=0; i < strlen(p); i++){
        count = (int)p[i] - 71;
        countkey = (int)key[i % strlen(key)] - 'a';
        result[i] = ("%c", ((count - countkey) % 26) + 'a');
    }
    result[strlen(p)]=0;
    printf("%s\n",result);
}

int main()
{
char *p = "hola";
encCaesar(3, p);
}

