#include <stdio.h>

int main() {
    // 2 rows (for tables of 2 and 3) and 10 columns (for multiples 1 to 10)
    int tables[2][10];

    // Store the table of 2 in row index 0
    for (int j = 0; j < 10; j++) {
        tables[0][j] = 2 * (j + 1);
    }

    // Store the table of 3 in row index 1
    for (int j = 0; j < 10; j++) {
        tables[1][j] = 3 * (j + 1);
    }

    // Print the stored tables
    printf("Table of 2:\n");
    for (int j = 0; j < 10; j++) {
        printf("%d\n", tables[0][j]);
    }
    printf("\n");

    printf("Table of 3:\n");
    for (int j = 0; j < 10; j++) {
        printf("%d\n", tables[1][j]);
    }
    printf("\n");

    return 0;
}
