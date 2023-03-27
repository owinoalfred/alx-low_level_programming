#include <limits.h>

int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    int started = 0;

    while (*s != '\0') {
        if (*s == '-' || *s == '+') {
            sign = (*s == '-') ? -1 : 1;
        } else if (*s >= '0' && *s <= '9') {
            started = 1;
            int digit = *s - '0';

            if (num == INT_MIN / 10 && digit > 8 && sign == -1) {
                /* we have reached the minimum value for a signed integer */
                return INT_MIN;
            }

            /* compute the next value */
            num = num * 10 - digit;

            if (num > 0) {
                /* integer overflow occurred */
                return (sign == -1) ? INT_MIN : INT_MAX;
            }
        } else if (started) {
            /* we reached the end of the number */
            break;
        }
        s++;
    }

    return sign *num;
}
