/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:56:21 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/25 07:31:54 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	main(void) // ft_char_type
// {
// 	char	c;

// 	c = 'a';
// 	printf(" / len = %d", printf("%c", c));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%c", c));
// 	ft_printf("%c%c%c", 'a', 'b', 'c');
// 	return (0);
// }

// int	main(void) // ft_percent_type
// {
// 	char	c;

// 	c = '%';
// 	printf(" / len = %d", printf("%%"));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%%"));
// 	return (0);
// }

// int	main(void) //ft_str_type
// {
// 	char	str[] = "Test de la fonction printf";

// 	printf(" / len = %d", printf("%s", str));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%s", str));
// 	printf(" \n");
// 	printf(" / len = %d", printf("%s", NULL));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%s", NULL));
// 	return (0);
// }

// int	main(void) // ft_int_type
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 2147483647;
// 	j = -1278;
// 	k = -2147483648;
// 	printf(" / len = %d", printf("%d", i));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%d", i));
// 	printf("\n");
// 	printf(" / len = %d", printf("%d", j));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%d", j));
// 	printf("\n");
// 	printf(" / len = %d", printf("%d", k));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%d", k));
// 	return (0);
// }

// int	main(void) // ft_unsigned_type
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	k;

// 	i = 247483647;
// 	j = -101;
// 	k = -9;
// 	printf(" / len = %d", printf("%u", i));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%u", i));
// 	printf("\n");
// 	printf(" / len = %d", printf("%u", j));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%u", j));
// 	printf("\n");
// 	printf(" / len = %d", printf("%u", k));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%u", k));
// 	return (0);
// }

// int	main(void) // ft_ptr_type
// {
// 	uintptr_t	i;
// 	uintptr_t	j;
// 	uintptr_t	k;

// 	i = 2;
// 	j = 101;
// 	k = 9;
// 	printf(" / len = %d", printf("variable i adress = %p", (void *)&i));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("variable i adress = %p", (void *)&i));
// 	printf("\n");
// 	printf(" / len = %d", printf("variable j adress = %p", (void *)&j));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("variable j adress = %p", (void *)&j));
// 	printf("\n");
// 	printf(" / len = %d", printf("variable k adress = %p", (void *)&k));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("variable k adress = %p", (void *)&k));
// 	return (0);
// }

// int	main(void) // ft_hex_type
// {
// 	int	i;
// 	int	j;

// 	i = 123456;
// 	j = -13215468;
// 	printf(" / len = %d", printf("%x", i));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%x", i));
// 	printf("\n");
// 	printf(" / len = %d", printf("%x", j));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%x", j));
// 	printf("\n");
// 	printf(" / len = %d", printf("%X", i));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%X", i));
// 	printf("\n");
// 	printf(" / len = %d", printf("%X", j));
// 	printf("\n");
// 	ft_printf(" / len = %d", ft_printf("%X", j));
// 	return (0);
// }