/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:58:44 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/01 17:58:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	printf("1 %d\n",ft_strncmp("a","a",1));
	printf("2 %d\n",ft_strncmp("abc","a",2));
	printf("3 %d\n",ft_strncmp("a","ab",2));
	printf("4 %d\n",ft_strncmp("abc","abe",3));
	printf("5 %d\n",ft_strncmp("ate","aged",3));
	printf("6 %d\n",ft_strncmp("aved","ate",4));
	printf("7 %d\n",ft_strncmp("","",1));
	printf("8 %d\n",ft_strncmp(" "," ",1));
	printf("9 %d\n",ft_strncmp("a","az",1));
	printf("0 %d\n",ft_strncmp("az","za",1));
}*/
