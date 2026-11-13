// #include<stdio.h>
// int main (){
//     int arr[]={12,3,44,56};
//     printf("%d",arr[3]);
//     return 0;
// }
#include <stdio.h>

int main() {
    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 89;

    int marks[3];

    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter chem : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, math = %d\n", marks[0], marks[1], marks[2]);

    return 0;
}

//string
// #include <stdio.h>

// int main() {
//     int marks[3];
//     // Simple array of strings for the subject names
//     char *subjects[] = {"phy", "chem", "math"}; 

//     // Loop to take input dynamically
//     for (int i = 0; i < 3; i++) {
//         printf("enter %s : ", subjects[i]);
//         scanf("%d", &marks[i]);
//     }

//     printf("phy = %d, chem = %d, math = %d\n", marks[0], marks[1], marks[2]);
//     return 0;
// }
