#include <stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
    char myString[30]; // String
};


struct Car {
  char brand[50];
  char model[50];
  int year;
};



int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;
  struct myStructure s2;
  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  s2.myNum = 20;
  s2.myLetter = 'C';

  strcpy(s1.myString, "Some text");
  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);
 printf("My string: %s\n", s1.myString);

 printf("s2 number: %d\n", s2.myNum);
  printf("s2 letter: %c\n", s2.myLetter);


  // Create a structure variable and assign values to it
  struct myStructure s3 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myString);



struct Car car1  = {"BMW", "X5", 1999};
  struct Car car2  = {"Ford", "Mustang", 1969};
  struct Car car3  = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);
  return 0;
}