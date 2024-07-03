#include<stdio.h>
int main(){
    char str[200];
    gets(str);
    char *p;
    p=str;
    int count=0;
    while(*p!='\0'){
        count++;
        p++;
    }
    printf("%d",count);
    return 0;
}
