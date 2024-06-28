#include "libft.h"

static int	ft_s_strlen(const char *s);
static char	*ft_s_substr(char const *s, unsigned int start, size_t len);
static char	*ft_s_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		inlen;
	int		outlen;
	int		start;
	int		end;
	char	*buffer;

	inlen = ft_s_strlen((char *)s1);
	start = 0;
	end = 0;
	while (ft_s_strchr((char *)set, (char)s1[start]) != 0)
		start++;
	while (ft_s_strchr((char *)set, (char)s1[--inlen]) != 0)
		end++;
	outlen = inlen - start + 1;
	buffer = (char *)malloc(sizeof(s1) * (outlen));
	if (!buffer)
		return (NULL);
	buffer = ft_s_substr(s1, start, outlen);
	buffer[outlen + 1] = '\0';
	return (buffer);
}

static char	*ft_s_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

static char	*ft_s_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	unsigned int		i;

	i = 0;
	substr = (char *)malloc(sizeof (*s) * (len + 1));
	if (!substr)
		return (NULL);
	else
	{
		while (i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
		substr[i] = '\0';
	}
	return (substr);
}

static int	ft_s_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	s1[] = "+ ana banana ++  + ";
	char	set[] = "+ ";
	char	*buffer = '\0';

	printf("%s\n", s1);
	buffer = ft_strtrim(s1, set);
	printf("%s\n", buffer);
}
*/
