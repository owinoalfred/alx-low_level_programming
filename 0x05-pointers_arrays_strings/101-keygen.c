#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 62 // The number of characters that can be used in the password
#define PASSWORD_LEN 22 // The length of the password

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[PASSWORD_LEN + 1]; // Initialize the password buffer (+1 for the null terminator)
    const char *chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Characters that can be used in the password
    int i;

    srand(time(NULL)); // Seed the random number generator with the current time

    // Generate a random password
    for (i = 0; i < PASSWORD_LEN; i++)
    {
        int idx = rand() % MAX_LEN; // Generate a random index into the chars array
        password[i] = chars[idx]; // Append the selected character to the password buffer
    }

    password[PASSWORD_LEN] = '\0'; // Add a null terminator to the end of the password buffer

    printf("%s", password); // Print the password to stdout

    return (0);
}
