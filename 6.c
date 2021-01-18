#include<stdio.h>

int main(){
    int number;
    char months[12][20] = { "January", "February", "March", "April", "June", "July", "August", "September", "October", "November", "December" };
    scanf("%d", &number);
    printf("%s", months[number - 1]);
}
