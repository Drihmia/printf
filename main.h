#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_number(int n);
int _len(int n);
int _pow(int m, int n);
void print_unumber(unsigned int n);
int _ulen(unsigned int n);
unsigned int _upow(int m, int n);
#endif
