/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:09:58 by alara-gu          #+#    #+#             */
/*   Updated: 2024/10/09 14:24:15 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	**arrarr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	arrarr = (unsigned char **)malloc(nmemb * size);
	if (!arrarr)
		return (NULL);
	else
		ft_bzero(arrarr, nmemb * size);
	return (arrarr);
}

/*
int	main(void)
{
	char	**arrarr;

	arrarr = ft_calloc(3, 10);
	arrarr[0] = "ana banana";
	arrarr[1] = "ini";
	arrarr[2] = "ono";

	printf("%s\n", arrarr[0]);
	printf("%s\n", arrarr[1]);
	printf("%s\n", arrarr[2]);
	free(arrarr);
}
*/
