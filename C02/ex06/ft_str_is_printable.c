/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:18:22 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/24 13:15:41 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("abcd"));
	printf("%d\n", ft_str_is_printable("\t"));
	printf("%d\n", ft_str_is_printable("1234"));
	printf("%d\n", ft_str_is_printable("!@#$"));
	printf("%d\n", ft_str_is_printable("\0"));
	return (0);
}
*/
