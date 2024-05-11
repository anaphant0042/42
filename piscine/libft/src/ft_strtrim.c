#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		inlen;
	int		outlen;
	int		start;
	int		end;
	char	*buffer;

	inlen = ft_strlen((char *)s1);
	start = 0;
	while (ft_strchr((char *)set, (char)s1[start]) != 0)
		start++;
	end = 0;
	while (ft_strchr((char *)set, (char)s1[--inlen]) != 0)
		end++;
	outlen = inlen - start + 1;
	buffer = (char *)malloc(sizeof(s1) * (outlen));
	if (!buffer)
		return (NULL);
	buffer = ft_substr(s1, start, outlen);
	buffer[outlen + 1] = '\0';
	return (buffer);
}
/*
int	main(void)
{
	char	s1[] = "+ elena maria ++   + ";
	char	set[] = "+ ";
	char	*buffer = '\0';

	printf("%s\n", s1);
	buffer = ft_strtrim(s1, set);
	printf("%s\n", buffer);
}
*/
