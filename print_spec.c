#include "main.h"
#include<stdio.h>

/**
 * form_char - Affiche un caractère
 * @args: liste des arguments variables
 *
 * Return: 1 si le caractere est affiche, -1 en cas d'erreur
 */
int form_char(va_list args)
{
	int c;
	/* Recupere le prochain argument sous forme d'un int */
	c = va_arg(args, int);
	/* Affiche le caractere et verifie les erreurs d'ecriture */
	if (_putchar(c) == -1)
		return (-1);
	/* Retourne 1 car un seul caractere a ete affiche */
	return (1);
}

/**
 * form_string - Affiche une chaine de caractères
 * @args: liste des arguments variables
 *
 * Return: nombre de carcatères affichés, -1 en cas d'erreur
 */
int form_string(va_list args)
{
	char *str; /* Pointeur vers la chaine de caracteres a afficher */
	int i = 0;
	/* Recupere le pointeur vers la chaine a afficher */
	str = va_arg(args, char *);
	/* Si str est NULL, utilise "(null)" a la place */
	if (str == NULL)
		str = "(null)";
	/* Parcourt la chaine jusqu'au caractère de fin */
	while (str[i] != '\0')
	{
		/* Affiche le caractere actuel et verifie les erreurs */
		if (_putchar(str[i]) == -1)
			return (-1);
		/* Passe au caractere suivant */
		i++;
	}
	/* Retourne le nombre de caracteres affiches */
	return (i);
}


/**
 * form_percent - affiche le caractere pourcentage
 * @args: liste des arguments pas utilisée
 *
 * Return: 1 si le pourcentage est affiché, -1 si erreur
 */
int form_percent(va_list args __attribute__((unused)))
{
	/* Affiche un pourcentage et verifie les erreurs */
	if (_putchar('%') == -1)
		return (-1);
	/* Retourne 1 car un seul caractere est affiché */
	return (1);
}
