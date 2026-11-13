#include <stdio.h>

struct address {
    int house_no;
    char block[20];
    char city[50];
    char state[50];
};

int main() {
    struct address adds[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter info for person %d\n", i + 1);
        
        printf("House No: ");
        scanf("%d", &adds[i].house_no);
        
        printf("Block: ");
        scanf("%s", adds[i].block);
        
        printf("City: ");
        scanf("%s", adds[i].city);
        
        printf("State: ");
        scanf("%s", adds[i].state);
        printf("\n");
    }

    for(int i = 0; i < 5; i++) {
        printf("Person %d Address: House No %d, Block %s, %s, %s\n", 
               i + 1, adds[i].house_no, adds[i].block, adds[i].city, adds[i].state);
    }

    return 0;
}
