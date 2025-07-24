/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:09:18 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/24 16:46:05 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
	{
		(str[0] = str[0] - 32);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			(str[i] = str[i] + 32);
		}
		if (str[i - 1] < 65 || str[i - 1] > 90)
			if (str[i - 1] < 98 || str[i - 1] > 122)
				if (str[i - 1] < 48 || str[i - 1] > 57)
					if (str[i] >= 97 && str[i] <= 122)
						(str[i] = str[i] - 32);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s\n", ft_strcapitalize(str));
	
	return(0);
}
*/
