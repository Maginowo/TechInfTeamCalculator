#include <iostream>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    int number1, number2, result;

    number1 = atoi(argv[1]);
    number2 = atoi(argv[3]);

    if (strcmp(argv[2], "add") == 0) {
        result = number1 + number2;
        printf("%d + %d = %d\n", number1, number2, result);
    }
    else if (strcmp(argv[2], "power") == 0) {
        result = pow(number1, number2);
        printf("%d ^ %d = %d\n", number1, number2, result);
    }
    else if(strcmp(argv[2],"mul") ==0){
    result = number1 * number2;
        printf("%d * %d = %d \n",number1, number2, result);
    }
    else if(strcmp(argv[2], "divide") == 0) {
        result = number1 / number2;
        printf("%d / %d = %d\n", number1, number2, result);
    }
    else if (strcmp(argv[2], "sub") == 0) {
        result = number1 - number2;
        printf("%d - %d = %d\n", number1, number2, result);
        return 0;
    }
    else if(strcmp(argv[2],"sqrt")==0){
        result = sqrt(number1);
        printf("sqrt %d = %d\n", number1, result);
    }
    return 0;
}
