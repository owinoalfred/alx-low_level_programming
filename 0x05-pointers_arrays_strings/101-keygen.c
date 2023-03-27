#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 63

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i, random_value;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        random_value = rand() % 62;
        if (random_value < 26) {
            /* lowercase letter */
            password[i] = 'a' + random_value;
        } else if (random_value < 52) {
            /* uppercase letter */
            password[i] = 'A' + random_value - 26;
        } else {
            /* digit */
            password[i] = '0' + random_value - 52;
        }
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return (0);
}
