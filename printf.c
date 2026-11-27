#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - create our own printf
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	/*initialise le i pour se déplacer dans la chaine de caractère format*/
	/*initialise le count pour compter le nombre de caractères*/
	int i = 0;
	int count = 0;
	va_list args; /* Déclare la liste d'arguments */

	/* Vérifie que format n'est pas NULL*/
	/* Si NULL renvoie -1 pour éviter un seg fault*/
	if (format == NULL)
		return (-1);

	/* initialise le parcours des arguments */
	va_start(args, format);

	/* Parcourt format jusqu'au caractère de fin '\0'*/
	while (format[i] != '\0')
	{
		/* Vérifie si le caractère actuel est un % */
		if (format[i] == '%')
		{
			/* Vérifie qu'un caractère existe après le % */
			if (format[i + 1] != '\0')
			{
					/* Test switch.c */
			}
			else
			{
				/* Gérer le % en fin de chaîne pour pas appeler switch.c */
			}
		}
		else
		{
			/* Vérifie si write dans _putchar a rencontré une erreur d'écriture */
			if (_putchar(format[i]) == -1)
			{
				return (-1);
			}

			/* Compte le caractère affiché */
			count++;
		}
		/*Passe au caractère suivant*/
		i++;
	}
	/* termine le parcours des arguments */
	va_end(args);
	return (count);
}
