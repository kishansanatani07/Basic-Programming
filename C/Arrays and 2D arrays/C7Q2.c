/*#include <stdio.h>

// Function declaration using a pointer parameter
void print_final_costs(float *ptr);

int main() {
    float price[3];

    // Input the prices
    printf("enter price of item 1 : ");
    scanf("%f", &price[0]);

    printf("enter price of item 2 : ");
    scanf("%f", &price[1]);

    printf("enter price of item 3 : ");
    scanf("%f", &price[2]);

    // Pass the array (decays to a pointer to the first element) to the function
    print_final_costs(price);

    return 0;
}

// Function using a pointer to calculate and print the costs
void print_final_costs(float *ptr) {
    printf("\n--- Final Cost with 18%% GST ---\n");
    
    for (int i = 0; i < 3; i++) {
        // *ptr targets the value at the current address
        float final_cost = *ptr + (0.18 * (*ptr)); 
        
        printf("Item %d final cost = %.2f\n", i + 1, final_cost);
        
        ptr++; // Move pointer forward to the next element address
    }
}
*/

// #include <stdio.h>

// int main() {
//     float price[3];
//     float total_bill = 0.0;

//     // Loop to collect prices
//     for (int i = 0; i < 3; i++) {
//         printf("enter price of item %d : ", i + 1);
//         scanf("%f", &price[i]);
//     }

//     printf("\n--- Final Cost with 18%% GST ---\n");
//     // Loop to calculate and display each item's final price
//     for (int i = 0; i < 3; i++) {
//         float final_cost = price[i] + (0.18 * price[i]);
//         printf("Item %d final cost = %.2f\n", i + 1, final_cost);
//         total_bill += final_cost; // Keeps track of the grand total
//     }

//     printf("--------------------------------\n");
//     printf("Grand Total Bill = %.2f\n", total_bill);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     float price[3];

//     // Enter prices for the 3 items
//     printf("enter price of item 1 : ");
//     scanf("%f", &price[0]);

//     printf("enter price of item 2 : ");
//     scanf("%f", &price[1]);

//     printf("enter price of item 3 : ");
//     scanf("%f", &price[2]);

//     // Calculate final costs including 18% GST
//     float final_cost1 = price[0] + (0.18 * price[0]);
//     float final_cost2 = price[1] + (0.18 * price[1]);
//     float final_cost3 = price[2] + (0.18 * price[2]);

//     // Print the final costs
//     printf("\n--- Final Cost with 18%% GST ---\n");
//     printf("Item 1 final cost = %.2f\n", final_cost1);
//     printf("Item 2 final cost = %.2f\n", final_cost2);
//     printf("Item 3 final cost = %.2f\n", final_cost3);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     float price;
//     printf("enter 3 prices : ");
//     scanf("%f", &price);
//     scanf("%f", &price);
//     scanf("%f", &price);

//     printf("total price 1 : %f\n", price + (0.18 * price));
//     printf("total price 2 : %f\n", price + (0.18 * price));
//     printf("total price 3 : %f\n", price + (0.18 * price));

//     return 0;
// }


#include <stdio.h>

int main() {
    float price[3];
    
    // Asks the user to type all 3 prices separated by spaces or tabs
    printf("enter 3 prices (separated by space): ");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);

    printf("total price 1 : %f\n", price[0] + (0.18 * price[0]));
    printf("total price 2 : %f\n", price[1] + (0.18 * price[1]));
    printf("total price 3 : %f\n", price[2] + (0.18 * price[2]));

    return 0;
}
