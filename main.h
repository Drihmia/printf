#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int _printf(const char *format, ...);
void print_number(int n);
int _len(int n);
void print_unumber(unsigned int n);
int _ulen(unsigned int n);
#endif
