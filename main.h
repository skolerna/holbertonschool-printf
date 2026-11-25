#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* pour reconnaitre va_list */

/**
 * struct format_conversion - structure for format conversion
 * @format_conversion: conversion format
 * @f: associated function
 */
typedef struct format_conversion
{
	char *format_conversion;
	int (*f)(va_list);
} form_t;

/* doit récupèrer les arguments dans les parenthèses*/
int form_char(va_list args);
int form_string(va_list args);
int form_percent(va_list args);

int _printf(const char *format, ...);
int _putchar(char c);

#endif
