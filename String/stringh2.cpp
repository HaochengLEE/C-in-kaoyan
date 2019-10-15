//
// Created by 李昊城 on 2019/9/30.
//
#include <stdio.h>
#include <string.h>
int mycmp(const char*a,const char*b){
    int start=0;
    while (a[start]==b[start]&&a[start]!='\0'){
       start++;
    }
    return a[start]-b[start];
}

int mycmp3(const char*a,const char*b){
    while (*a==*b&&*a!='\0'){
        a++;
        b++;
    }
    return *a-*b;
}

int mycmp2(const char*a,const char*b){
    int start=0;
    int count;
    while (a[start]!='\0'||b[start]!='\0'){
        if(a[start]==b[start]&&a[start]!='\0'){
            start++;
        } else{
            count=a[start]-b[start];
            start++;
        }
    }
    return count;
}

int main(){
    char s1[]="123";
    char s2[]="125";

    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",mycmp(s1,s2));
    printf("%d\n",mycmp2(s1,s2));
    printf("%d\n",mycmp3 (s1,s2));

    return 0;
}
