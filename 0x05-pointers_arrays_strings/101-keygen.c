#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 62
#define PASSWORD_LEN 22

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[PASSWORD_LEN + 1];
const char *chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Characters that can be used in the password
int i;
    srand(time(NULL));
    for (i = 0; i < PASSWORD_LEN; i++)
    {
        int idx = rand() % MAX_LEN;
        password[i] = chars[idx];
    }

    password[PASSWORD_LEN] = '\0';

    printf("%s", password);

    return (0);
}
