#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_number(int n);
int _len(int n);
int _pow(int m, int n);
void print_unumber(unsigned int n);
int _ulen(unsigned int n);
unsigned int _upow(int m, int n);
int print_str(char *str);
int _strlen_printed(const char *s);
int print_char(char ch);


#endif
