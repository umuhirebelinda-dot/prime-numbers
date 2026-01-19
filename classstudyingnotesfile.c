#include <stdio.h>
#include <string.h>
int main(){
    char name[30];
    char age[20];
    char username[30];
    printf("enter your name:  ");
    gets(name);
    printf("\n");
    gets(age);
    puts(name);
    printf("\n");
    printf("%d",strlen(name));
    printf("\n");
    strcpy(username,name);
    puts(username);
    puts(strupr(strcat(name, username)));

    //strlwc() and strupc()
     printf("%d",strcmp(name,age));
     printf("\n");
     //teacher explanations
     char str1[100]="hello";
     char str2[50]="Hello";
     int result=strcmp(str1,str2);
     printf("%d",result);




return 0;
}


