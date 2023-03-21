#include <stdio.h>

int main(void)
{
int n1 = 1, n2 = 2, n3, count = 0;
printf("%d, %d", n1, n2);
while (count < 96)
{
n3 = n1 + n2;
printf(", %d", n3);
n1 = n2;
n2 = n3;
count++;
}
printf("\n");
return 0;
}
