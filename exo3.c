#include <stdio.h>
#include <stdlib.h>

int main(void){
    float value;
    printf("Donnez une valeur: ");
    scanf("%f", &value);

    if (value == (int) value)
        printf("Integer\n");
    else printf("Float\n");

    printf("\n");
    
    return 0;
}