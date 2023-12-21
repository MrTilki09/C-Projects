#include <stdio.h>

int main() {
    int temp;
    int total = 0;
    int count;
    char symbol;
    printf("#################################################\n");
    printf("Note: You can enter a maximum of 10 numbers\n");
    printf("#################################################\n");

    for (count = 0; count < 10; count++) {
        if(count!=0){
        printf("\nSymbol: ");
        scanf(" %c", &symbol);}
        else(symbol='+');
        
        if (symbol == '=') {
            break; 
        }

        printf("\nNumber %d = ", count + 1);
        scanf("%d", &temp);

        if (symbol == '+') {
            total = total + temp;
        } else if (symbol == '-') {
            total = total - temp;
        } else if (symbol == '*') {
            total = total * temp;
        } else if (symbol == '/') {
            if (temp != 0) {
                total = total / temp;
            } else {
                printf("Error: Division by zero\n");
                break;
            }
        } else {
            printf("Invalid operation: %c\n", symbol);
            break;
        }
    }

    printf("The result is: %d\n", total);

    return 0;
}
