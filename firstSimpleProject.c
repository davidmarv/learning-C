#include <stdio.h>

struct nameCard {
  char phoneNumber[15];
  char ContactAddress[50];
char ContactName[30]; 
};


int main() {
    
    
    struct nameCard book[20];
    
    int z;
    printf("Enter how many contacts to create");
    printf("\n");
    scanf("%d", &z);

    
    for (int i = 0; i < z; i++)
    {
    printf("Enter contact name");
    printf("\n");
    scanf("%s", book[i].ContactName);

        printf("Enter contact address");
    printf("\n");
    scanf("%s", book[i].ContactAddress);

        printf("Enter contact phone number");
    printf("\n");
    scanf("%s", book[i].phoneNumber);
    }
    

for (int j = 0; j <z; j++){
printf("phone number of contact:   ");
printf("%s %s %s\n", book[j].ContactName, book[j].ContactAddress, book[j].phoneNumber);

}


 return 0;
}


