#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

typedef struct printer{
char *symbol;
void (*print)(va_list arg);
} printer_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
struct list
{
	char chars;
	void (*f)(va_list);
};
typedef struct list char_list;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void c_print(va_list pars);
void i_print(va_list pars);
void f_print(va_list pars);
void s_print(va_list pars);


#endif
