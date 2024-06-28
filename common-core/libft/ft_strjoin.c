#include "libft.h"

int	ft_s_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		i;
	int		j;

	joint = (char *)malloc(
			sizeof(s1) * (ft_s_strlen(s1) + ft_s_strlen(s2) + 1));
	if (!joint)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			joint[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
			joint[i++] = s2[j++];
		joint[i] = '\0';
	}
	return (joint);
}

int	ft_s_strlen(const char *s)
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
	char s1[] = "ana ";
	char s2[] = "banana";
	char *joint;

	printf("%s\n", s1);
	printf("%s\n", s2);
	joint = ft_strjoin(s1, s2);
	printf("%s\n", joint);
}
*/
