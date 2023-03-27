#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */

int main(void)
{
  char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}\\|;:'\",.<>/?`~";
  char password[PASSWORD_LENGTH + 1];
  int i;

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = charset[rand() % sizeof(charset)];
  }

  password[PASSWORD_LENGTH] = '\0';

  printf("%s\n", password);

  return 0;
}
