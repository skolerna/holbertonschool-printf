#ifndef MAIN_H
#define MAIN_H

/**
 * struct conversion - structure for conversion
 * @format_conversion: 
 * @f: associated function
 */
typedef struct format_conversion
{
	char *format_conversion;
	int (*f)(va_list);
} form_t;

int form_char();
int form_string();
int form_percent();

int _printf(const char *format, ...);

#endif
