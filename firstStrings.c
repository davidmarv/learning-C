#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%s", greetings);
  printf("\n");
 printf("%c", greetings[0]);

 printf("\n");

 greetings[2] = 'f';

 printf("%s", greetings);

printf("\n");
char greet[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greet);

printf("\n");
  return 0;
}