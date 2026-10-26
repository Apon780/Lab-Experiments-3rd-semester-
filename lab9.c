#include<stdio.h>

int main(){
char a [100],cha;
int i=0,position;
gets(a);
int n = sizeof(a)/sizeof(a[0]);
while(a[i]!=0){
    printf("%c",a[i]);
    i++;
}
printf("\n"); 
}