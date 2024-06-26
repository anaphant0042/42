/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:07:20 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/26 16:07:23 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_s_islower(int c);
static int	ft_s_isupper(int c);
static int	ft_s_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_s_islower(c) || ft_s_isupper(c) || ft_s_isdigit(c))
		return (1);
	else
		return (0);
}

static int	ft_s_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}

static int	ft_s_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}

static int	ft_s_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (0);
	else
		return (1);
}
