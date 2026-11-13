// #include <stdio.h>
// int main(){
//     printf("%d\n", main());
//     return 0;
// }
#include <stdio.h>

int main() {
    int choice;

    printf("\n--- Main Function Started ---\n");
    printf("Enter 1 to call main() again, or 0 to STOP: ");
    
    // 1. Pause and scan the user's input
    scanf("%d", &choice);

    // 2. Use if-else to decide what to do next
    if (choice == 1) {
        printf("Calling main() function again now...\n");
        
        // 3. THIS IS WHERE WE CALL MAIN AGAIN
        main(); 
        
    } else {
        // 4. This is the STOP point where the function ends
        printf("Stop point reached. Closing this copy of main.\n");
    }

    return 0;
}
