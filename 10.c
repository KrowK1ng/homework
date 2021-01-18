#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    a++;
    for(int i = 1; i < a; i++){
        printf("%d ^ 2 = %d\n", i , i * i);
    }
}
