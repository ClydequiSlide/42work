/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:12:41 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/24 14:29:23 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("1234"));
	printf("%d\n", ft_str_is_numeric("56789"));
	printf("%d\n", ft_str_is_numeric("324%$$ccabdz"));
	printf("%d\n", ft_str_is_numeric("1abcd9"));
	printf("%d\n", ft_str_is_numeric(" "));

	return (0);
}
*/
