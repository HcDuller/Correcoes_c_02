/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:44:13 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/10 01:43:41 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "ex10/ft_strlcpy.c"

int		main(void)
{
	char src[25] = "This is the source array";
	char dest[40] = "ajkndlksndflansdflnsldfjnsdjfnqwefghuio";
	char dest2[40] = "ajkndlksndflansdflnsldfjnsdjfnqwefghuio";
	char *psrc = src;
	char *pdest = dest;
	char *pdest2 = dest2;
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("--------------------------------------EX10--------------------------------------\n");
	printf("--------------------------------------Pre---------------------------------------\n");
	printf("src:		%s\n",src);
	printf("dest:(Original)	%s\n",dest);
	strlcpy(pdest,psrc,20);
	ft_strlcpy(pdest2,psrc,20);
	printf("--------------------------------------Pos---------------------------------------\n");
	printf("dest:(strlcpy)		%s\n",dest);
	printf("dest:(ft_strlcpy)	%s\n",dest2);	
	printf("--------------------------------------Fim---------------------------------------\n");	
	return (0);
}
