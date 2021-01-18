#include<stdio.h>

int main(){
    int id, hours, salary;
    printf("Id: ");
    scanf("%d", &id);
    printf("Hours worked in the month: ");
    scanf("%d", &hours);
    printf("Income per hour: ");
    scanf("%d", &salary);
    printf("%d gets %d$ per mont ", id, hours * salary);
}
