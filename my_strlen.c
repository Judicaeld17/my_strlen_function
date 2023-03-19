#include<stdio.h>
int my_strlen(char* string){
    int len=0;
    while(*string !='\0'){
       len++;
       string++;
    }
    return len;
}
int main(){
    char my[6]="hello";
    printf("%d",my_strlen(my));
    return 0;
}