/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:44:28 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/27 14:44:30 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{	
	printf("%d",ft_str_is_printable("\r"));
	printf("%d",ft_str_is_printable("\t"));
	printf("%d",ft_str_is_printable("imjrgergerg"));
	printf("%d",ft_str_is_printable("ekewJoifjeWoifewoif121212"));
	printf("%d",ft_str_is_printable("kkefnow!&@^!@#$*()skndwnd94342"));
	printf("%d",ft_str_is_printable("dwd dowqdp dwq dqdwq "));
	printf("%d",ft_str_is_printable("d4! @#$ %^&* ()_ = =+{}[]'"));
	printf("%d",ft_str_is_printable("d4! @#$ %^&'\\;;./,<<>>?/<>>*-+/'"));
	printf("%d",ft_str_is_printable(""));
}*/
