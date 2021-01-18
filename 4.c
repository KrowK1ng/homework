#include<stdio.h>

int main(){
    int sec;
    printf("Time : ");
    scanf("%d", &sec);
    printf("%d hours ", sec / 3600);
    sec = sec % 3600;
    printf("%d minutes ", sec / 60);
    sec = sec % 60;
    printf("%d seconds \n", sec);
}
