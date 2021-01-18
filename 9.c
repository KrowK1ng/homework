#include<stdio.h>

int main(){
    int size = 0;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(!(i * j * (size - j - 1) * (size - i - 1)))
                printf("#");
            else
                printf(" ");
        }
        puts("");
    }
}
