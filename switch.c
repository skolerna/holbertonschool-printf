#include "main.h"
#include<stdio.h>
#include <stdarg.h>

/**
* get_form_funct - allows for selecting the appropriate function
* @s: specifier
* Return: the appropriate function to call
 */

int (*get_form_funct(char *s))(va_list args)
{
	form_t ops[] = {
		{"c", form_char},
		{"s", form_string},
		{"%", form_percent},
		{NULL, NULL}
	};

	int i = 0;

	/* pour avancer dans la liste précédente*/
	for (; ops[i].format_conversion != NULL ; i++) /* sentielle*/
	{
		if (strcmp(s, ops[i].format_conversion) == 0) /*fonction de comparaison*/
			return (ops[i].f);
	}
	return (NULL);
}
