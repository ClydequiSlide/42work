/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:46:44 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/30 14:26:43 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] != '\0' && to_find[j] != '\0'
				&& str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char 	str[] = "HelloWorld";
	char	to_find[] = "World";
	char	*result = ft_strstr(str, to_find);

	if (result)
	{
		printf("Found : %s\n", result);
	}
	else
	{
		printf("Not Found\n");
	}
	return(0);
}
*/
