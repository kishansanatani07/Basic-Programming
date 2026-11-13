#include <stdio.h>

// Function to count the occurrences of vowels in a string
int countVowels(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check for both lowercase and uppercase vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[] = "HelloWorld";

    int totalVowels = countVowels(str);

    printf("String: %s\n", str);
    printf("Total number of vowels: %d\n", totalVowels); // Outputs 3 (e, o, o)

    return 0;
}
