#include<stdio.h>

int main(){
    int days;
    scanf("%d", &days);
    printf("%d years ", days / 365);
    days = days % 365;
    printf("%d weeks ", days / 7);
    days = days % 7;
    printf("%d days \n", days);
}
