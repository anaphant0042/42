/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:40:09 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/25 15:14:26 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_s_strlen(char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			srclen;

	i = 0;
	srclen = ft_s_strlen((char *)src);
	if (size == 0)
		return (0);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

static int	ft_s_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	src[] = "ana banana";
	char	dest[] = "xxxxxxxxxx";
	
	printf("%s\n", dest);
	ft_strlcpy(dest, src, 11);
	printf("%s\n", dest);
}
*/
