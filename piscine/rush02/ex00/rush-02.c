/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:10:38 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/10 10:30:44 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "branxas.h"

int	main(int argc, char **argv)
{
	char	*dictionary;
	char	*file_name;
	int		size;
	char	*number_to_clean;

	file_name = "dictionary.txt";
	size = ft_filesize(file_name);
	dictionary = (char *)malloc(size * sizeof (char));
	number_to_clean = (char *)malloc(100 * sizeof (char));
	if (dictionary == NULL)
		return (1);
	ft_parsedictionary(dictionary, size);
	if (argc == 2)
	{
		number_to_clean = argv[1];
		ft_findletters(dictionary, ft_clean(number_to_clean));
	}
	else if (argc == 3)
	{
		file_name = argv[1];
		number_to_clean = argv[2];
	}
	else
		return (0);
	free(dictionary);
}
	/* Still to learn:
	 * how to properly free mallocs if they are part of a function
	 * where I use their value as a return.
	 * free mallocs:
	 * dictionary
	 * number_to_convert*/
/*
  Ww didn't have time to conitnue, but this is
  what we would do:
  with malloc create an array of arrays for our input "number"
	with malloc, create arrays of three for each section 
 	take our clean argv and with module3 divide to fill in each section
	start loop to write from last to firsit section
		compare middle digit of section to check if equal to 1.
			if equal to one, last two digits will be searched together.
			if not, individually.
		add the value searched to a new malloc1
		make those digits already considered to zero.
			the first of each section will have suffix equivalent to "hundred"
		create a new malloc2 to concatenate malloc 1 to new finding.
		at the end of each section, check for suffix
			first section doesn't have suffix.*/
