#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main(int argc, char const *argv[]) {
    
    char str[] = "Meu nome e Mateus e gostaria de trabalhar na Target";
    
    printf("String original: %s\n", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
