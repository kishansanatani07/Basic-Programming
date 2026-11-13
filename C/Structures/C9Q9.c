#include <stdio.h>
#include <string.h>

typedef struct BankAccount {
    int accNo;
    char name[100];
    float balance;
} acc;

int main() {
    acc c1;
    c1.accNo = 12345;
    strcpy(c1.name, "aman");
    c1.balance = 50000.50;

    printf("Account No: %d\n", c1.accNo);
    printf("Name: %s\n", c1.name);
    printf("Balance: %.2f\n", c1.balance);

    return 0;
}
