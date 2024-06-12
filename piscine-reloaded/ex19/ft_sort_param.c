/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:13:14 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/10 18:56:37 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_element(char **str1, char **str2);
void	print_array(int argc, char **argv);
void	bubble_sort(int argc, char **argv);
int		ft_strcmp(char *str1, char *str2);
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	else
		bubble_sort(argc, argv);
	print_array(argc, argv);
}

void	print_array(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	bubble_sort(int argc, char **argv)
{
	int	step;
	int	i;

	step = 0;
	while (step < argc - 2)
	{
		i = 1;
		while (i < argc - step - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				swap_element(&argv[i], &argv[i + 1]);
			i++;
		}
		step++;
	}
}

void	swap_element(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
