/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:44:13 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/09 06:29:51 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex11/ft_putstr_non_printable.c"

int		main(void)
{
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("--------------------------------------EX11--------------------------------------\n\n");	
	char src1[] = "Oi\nvoce esta bem?";		
	char src2[] = "Teste \nPerso\rnalizado\t";
	ft_putstr_non_printable(src1);
	printf("\n");
	ft_putstr_non_printable(src2);
	printf("\n");
	printf("--------------------------------------Fim---------------------------------------\n");	
	return (0);
}
