#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number;
    printf("Un entier: \n");
    scanf("%d", &number);
    if (number <= 0) 
        return 1;

    for (int i = 1; i < number; ++i){
        if ((i % 2 == 0) && (i % 3 == 0)) 
            printf("FizzBuzz\n");
        else if (i % 2 == 0) 
            printf("Fizz\n");
        else if (i % 3 == 0) 
            printf("Buzz\n");
        else 
            printf("Entier: %d\n", i);
    }

    return 0;
}