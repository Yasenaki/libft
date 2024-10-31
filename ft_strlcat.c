/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:58:48 by jopires-          #+#    #+#             */
/*   Updated: 2024/10/31 14:45:32 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	x;
    int dtl;
    int srcl;

	i = 0;
	x = 0;
    srcl = ft_strlen((char *)src);
    dtl = ft_strlen(dest);

    if (srcl > (int)size){
        return(srcl +size);}
	while (dest[x] != '\0')
		x++;
	while (i < srcl)
	{
		dest[x + i] = src[i];
		i++;
	}
    dest[x+i] = 0;
        return(dtl + srcl);
}
/*
 int main()
{
	char a[] = "testing";
	char b[50] = "hello ";
	char b2[50] = "hello ";
	int aux = ft_strlcat(b,a,29);
    int aux2 = strlcat(b2,a,29);
	printf("!return: %d\n %s\n",aux , b);
	printf("@return: %d\n %s\n",aux2 , b2);
	return(0);
} */