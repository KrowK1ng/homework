#include<stdio.h>

int main(){
    int x, sum = 0, num = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &x);
        if(x > 0){
            num++;
            sum += x;
        }
    }

    if(num)
        printf("There are %d positive numbers and the average is %.2f", num, (float)sum / (float)num);
    else
        puts("There are no positive nubers");
}
