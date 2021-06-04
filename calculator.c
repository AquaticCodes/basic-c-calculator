#include <stdio.h>

int main() {

printf("type a for addition, s for subtraction, m for multiply, d for divide \n \n input:");

int input;

scanf("%c", &input);

if (input == 'a' || input == 'A') {

int first, second;

printf("Enter A Digit:");

scanf("%d", &first);

printf("Enter Second Digit:");

scanf("%d", &second);

int function = first + second;

printf("The Result Is: %d", function);

} else if (input == 's' || input == 'S') {
int first, second;

printf("Enter A Digit:");

scanf("%d", &first);

printf("Enter Second Digit:");

scanf("%d", &second);

int function = first - second;

printf("The Result Is: %d", function);

} else if (input == 'm' || input == 'M') {
int first, second;

printf("Enter A Digit:");

scanf("%d", &first);

printf("Enter Second Digit:");

scanf("%d", &second);

int function = first * second;

printf("The Result Is: %d", function);

} else if (input == 'd' || input == 'D') {
int first, second;

printf("Enter A Digit:");

scanf("%d", &first);

printf("Enter Second Digit:");

scanf("%d", &second);

int function = first / second;

printf("The Result Is: %d", function);

} else {
printf("Unexpected Input: Invalid Option");
}

return 0;

}
