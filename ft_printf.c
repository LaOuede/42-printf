/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:06:22 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/18 11:54:51 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	///
Description :
	The printf utility formats and prints its arguments, after the first,
	under control of the format.
Declaration :
	printf format [arguments ...]
Parameters :
	format - The format is a character string which contains three types of
	objects: plain characters, which are simply copied to standard output, 
	character escape sequences which are converted and copied to the standard
	output, and format specifications, each of which causes printing of the
	next successive argument.
    ... - The undefined number od arguments.
Return Value :
	The printf function returns the number of characters printed.

Implémenter les conversions suivantes :
	%c - Affiche un seul caractère `char`
	%s - Affiche une chaîne de caractères (telle que définie par la
	convention C) `string`
	%p - L’argument de pointeur void * doit être affiché en hexadécimal `ptr`
	%d - Affiche un nombre décimal (base 10) `décimal base 10`
	%i - Affiche un entier en base 10 `entier base 10`
	%u - Affiche un nombre décimal non signé (base 10) `unsigned entier base 10`
	%x - Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules
	`nombre hexa base 16 MIN`
	%X - Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules
	`nombre hexa base 16 MAJ`
	%% - Affiche un signe pourcentage `%`
*/

#include "ft_printf.h"

static int	ft_search_arg_type(va_list arg, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_str_type(arg));
	else if (c == 'd' || c == 'i')
		return (ft_int_type(arg));
	else if (c == 'p')
		return (ft_ptr_type(arg));
	else if (c == 'u')
		return (ft_unsigned_type(arg));
	else if ((c == 'x') || (c == 'X'))
		return (ft_hex_type(arg, c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	if (!format)
		return (0);
	va_start(arg, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_search_arg_type(arg, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

/*int	main(void) // ft_char_type
{
	char	c;

	c = 'a';
	printf(" / len = %d", printf("%c", c));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%c", c));
	return (0);
}*/

/*int	main(void) // ft_percent_type
{
	char	c;

	c = '%';
	printf(" / len = %d", printf("%%"));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%%"));
	return (0);
}*/

/*int	main(void) //ft_str_type
{
	char	str[] = "Test de la fonction printf";

	printf(" / len = %d", printf("%s", str));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%s", str));
	printf(" \n");
	printf(" / len = %d", printf("%s", NULL));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%s", NULL));
	return (0);
}*/

/*int	main(void) // ft_int_type
{
	int	i;
	int	j;
	int	k;

	i = 2147483647;
	j = -1278;
	k = -2147483648;
	printf(" / len = %d", printf("%d", i));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%d", i));
	printf("\n");
	printf(" / len = %d", printf("%d", j));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%d", j));
	printf("\n");
	printf(" / len = %d", printf("%d", k));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%d", k));
	return (0);
}*/

/*int	main(void) // ft_unsigned_type
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 247483647;
	j = -101;
	k = -9;
	printf(" / len = %d", printf("%u", i));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%u", i));
	printf("\n");
	printf(" / len = %d", printf("%u", j));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%u", j));
	printf("\n");
	printf(" / len = %d", printf("%u", k));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%u", k));
	return (0);
}*/

/*int	main(void) // ft_ptr_type
{
	uintptr_t	i;
	uintptr_t	j;
	uintptr_t	k;

	i = 2;
	j = 101;
	k = 9;
	printf(" / len = %d", printf("variable i adress = %p", (void *)&i));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("variable i adress = %p", (void *)&i));
	printf("\n");
	printf(" / len = %d", printf("variable j adress = %p", (void *)&j));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("variable j adress = %p", (void *)&j));
	printf("\n");
	printf(" / len = %d", printf("variable k adress = %p", (void *)&k));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("variable k adress = %p", (void *)&k));
	return (0);
}*/

/*fint	main(void) // ft_hex_type
{
	int	i;
	int	j;

	i = 123456;
	j = -13215468;
	printf(" / len = %d", printf("%x", i));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%x", i));
	printf("\n");
	printf(" / len = %d", printf("%x", j));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%x", j));
	printf("\n");
	printf(" / len = %d", printf("%X", i));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%X", i));
	printf("\n");
	printf(" / len = %d", printf("%X", j));
	printf("\n");
	ft_printf(" / len = %d", ft_printf("%X", j));
	return (0);
}*/
