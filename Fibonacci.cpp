#include <stdio.h>

int main() {
    int a, b, c, num;
    a = 0;
    b = 1;
    
    printf("Digite um valor: ");
    scanf("%d", &num);
    
    if (num == 0 || num == 1) {
        printf("[%d] faz parte da sequencia de Fibonacci\n", num);
        return 0;
    }
    
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
        
        if (c == num) {
            printf("[%d] faz parte da sequencia de Fibonacci\n", num);
            return 0;
        }
    }
    
    printf("[%d] NAO faz parte da sequencia de Fibonacci\n", num);
    return 0;
}

