#include <stdio.h>
#include <string.h>

main() {
    char str[100];
    int tam, i;
    char temp;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    tam = strlen(str);

    for (i = 0; i < tam / 2; i++) {
        temp = str[i];
        str[i] = str[tam - i - 1];
        str[tam - i - 1] = temp;
    }

    printf("String invertida: %s\n", str);
}

