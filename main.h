#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#define ZERO 0

int _printf(const char *format, ...);
int print_number(int n);
int _len(int n);
int _pow(int m, int n);
int print_unumber(unsigned int n);
int _ulen(unsigned int n);
unsigned int _upow(int m, int n);
int print_str(char *str);
int _strlen_printed(const char *s);
int print_char(char ch);
int oct(unsigned int n);
int print_numbers(va_list list, char str);
int dec_to_bin(unsigned int n);
int DEC_TO_HEXA(int decimal_number);
int dec_to_hexa(int decimal_number);
int dec_to(va_list list, char str);
int is_dec_to(char s);
int convertS(char *string);
int print_pointer(void *ptr);

#endif
