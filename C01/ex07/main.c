/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:27:09 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 02:28:24 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        ft_rev_int_tab(int *tab, int size);

int         main(void)
{
    int tab[4];
    int size;

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = -3;
    tab[3] = 4;
    size = 4;