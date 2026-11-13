// #include <stdio.h>
// void printGreetings();//function declaration
// int main(){
// printGreetings(); //function call
//     return 0;
// }
// //function definition 
// void printGreetings(){
//     char Input;
//     printf("Enter the native place of User,ie.(I for Indian,F for French)\n");
//     scanf("%c",&Input);
//     if(Input=='I'){
//         printf("Namaste!\n");}
//         else if (Input=='F'){
//         printf("Bonjour!\n");
//         }
//         else{
//             printf("User is neither Indian nor an French\n");
//         }
//     }


    // M2

 #include <stdio.h>
// Function declarations
void namaste();
void bonjour();

int main() {
    char ch;

    // Prompt user for input
    printf("enter f for french & i for indian : ");
    
    // Note the space before %c: " %c" skips any leftover newline characters
    scanf(" %c", &ch);

    // Decision logic
    if (ch == 'i') {
        namaste();
    } 
    else if (ch == 'f') {
        bonjour();
    } 
    else {
        printf("Invalid input! Please enter 'i' or 'f'.\n");
    }

    return 0;
}

// Function definitions
void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("Bonjour\n");
}
