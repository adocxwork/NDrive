#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char input[1000];
    int freq[10] = {0};
    int i;

    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            freq[input[i] - '0']++;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}
