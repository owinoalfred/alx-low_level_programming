#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main() {
int prev_num = 1;
int next_num;
int curr_num = 2;
int sum_even = 0;
while (curr_num <= 4000000)
{
if (curr_num % 2 == 0)
{
sum_even += curr_num;
}
next_num = prev_num + curr_num;
prev_num = curr_num;
curr_num = next_num;
}
printf("%d\n", sum_even);
return (0);
}
