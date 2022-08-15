#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d", myNumbers[0]);
 
 printf("\n");
myNumbers[0] = 33;
 printf("%d", myNumbers[0]);
printf("\n");
int i;
for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);

}




printf("\n");

// Declare an array of four integers:
int newArr[4];

// Add elements
newArr[0] = 25;
newArr[1] = 50;
newArr[2] = 75;
newArr[3] = 100;
for (i = 0; i < 4; i++) {
  printf("%d\n", newArr[i]);

}

printf("\n");
  return 0;
}