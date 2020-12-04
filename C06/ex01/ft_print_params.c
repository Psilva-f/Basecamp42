/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:52:36 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 23:53:36 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	
	void	ft_putstr(char *str)
	{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
	write(1, &str[i], 1);
	i++;
	}
	write(1, "\n", 1);
	}
	
	int	main(int argc, char **argv)
	{
	int i;
	
	i = 1;
	while (i < argc)
	{
	ft_putstr(argv[i]);
	i++;
	}
	return (0);
	}
