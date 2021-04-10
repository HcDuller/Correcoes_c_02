/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:44:13 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/10 01:15:25 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex01/ft_strncpy.c"

int		main(void)
{
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("--------------------------------------EX01--------------------------------------\n");
	char src1[] = "0123456789";
	char src2[] = "0123456789";
	char dest1[30] = "012";
	char dest2[30] = "012";
	int number_to_copy = 6;

	char *pdest1;
	char *pdest2;	
	
	printf("-------------------------------------Antes--------------------------------------\n\n");	
	printf("Linha controle (executado com strncpy)	src:	%s	dest:	%s\n",src1,dest1);
	printf("Linha de execucao de ft_strncpy		src: 	%s	dest:	%s\n",src2,dest2);
	pdest1 = strncpy(dest1,src1,number_to_copy);
	pdest2 = ft_strncpy(dest2, src2,number_to_copy);
	printf("-------------------------------------Depois-------------------------------------\n");
	printf("				Copiar:	%d caracteres 				\n",number_to_copy);
	printf("Linha controle (executado com strncpy)	src:	%s	dest:	%s\n",src1,pdest1);
	printf("Linha de execucao de ft_strncpy		src: 	%s	dest:	%s\n",src2,pdest2);
	printf("--------------------------------------Fim---------------------------------------\n");	
	return (0);
}
