#include "main.h"

/**
 * print_times_table - prints the n times table, 
 * @n: the times table to print
 */
void print_times_table(int n) {
for (int i = 0; i <= n; i++) {
for (int j = 0; j <= n; j++) {
printf("%-4d", i*j); 
}
printf("\n");
}
}
