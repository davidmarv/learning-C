#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed!\n");
}
void names(char name[]) {
  printf("Hello %s\n", name);
}

int retExample(int x) {
  return 5 + x;
}


//void myFunction() { // declaration
  // the body of the function (definition)
//}

int main() {
  myFunction(); // call the function
  names("bob");
printf("Result is: %d\n", retExample(3));

int result = retExample(3);
  printf("Result is = %d\n", result);


  return 0;
}