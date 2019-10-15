//
// Created by 李昊城 on 2019/9/30.
//
#include <stdio.h>
#include <string.h>

int leelen(const char*s){
    int index=0;
    while (s[index]!='\0'){
        index++;
    }
    return index;

}

int main(){
    char line[]="Hey Siri";
    printf("%d\n",strlen(line));
    printf("%d\n",leelen(line));
    printf("%d\n",sizeof(line));

}
