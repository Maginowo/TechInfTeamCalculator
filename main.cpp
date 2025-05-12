#include <iostream>
#include <string.h>

int main(int argc, char const *argv[]) {
    int number1, number2, result;

    number1 = atoi(argv[1]);
    number2 = atoi(argv[3]);

    if (strcmp(argv[2], "add") == 0) {
        result = number1 + number2;
        printf("%d + %d = %d\n", number1, number2, result);
    }



    return 0;
}
