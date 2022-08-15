#include <stdio.h>

int main() {
  // Create an integer variable that will store the number we get from the user
  int myNum;

  // Ask the user to type a number
  printf("Type a number and press enter: \n"); 

  // Get and save the number the user types
  scanf("%d", &myNum);

  // Print the number the user typed
  printf("Your number is: %d", myNum);

printf("\n");

// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s.", firstName);


//this will give the memory address
//the & operator is used to access it
printf("\n");
int myAge = 43;
printf("%p", &myAge);

printf("\n");

int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

printf("%d\n", *ptr); //this will give the value 
  return 0;
}
