// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a= 100 , b=200;
    char kitu; 
    scanf ("%c", &kitu);
    switch(kitu) {
        case '*':
        printf("%d", a*b);
        break;
        case '+':
        printf ("%d", a+b);
        break;         
         default: 
            printf("khong co thang nay trong nam ");
        
    }

    return 0;
}