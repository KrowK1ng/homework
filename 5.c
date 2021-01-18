#include<stdio.h>

int main(){
    int x, ans = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d",&x);
        if (x % 2) 
            ans += x;
    }
    printf("The sum of all odd numbrs is %d", ans);
}
