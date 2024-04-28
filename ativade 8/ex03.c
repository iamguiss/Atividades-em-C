#include <stdio.h>

int main() {
    int linhas = 3;
    int i = 1;

    while (i <= linhas) {
        int j = 1;
        while (j <= i) {
            printf("#");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
