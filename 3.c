#include<stdio.h>

int main(){
    int money, i = 0;
    int banknotes[] = { 1000, 500, 100, 50, 20, 10, 5, 1 };
    printf("How much money you have?\n");
    printf("Enter value:");
    scanf("%d", &money);
    do{
        if(money / banknotes[i])
            printf("You have %d baknotes of %d lei\n", money / banknotes[i], banknotes[i]);
        money = money % banknotes[i];
        i++;
    }while ( money );

}
