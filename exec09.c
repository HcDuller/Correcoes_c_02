/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:11:01 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/10 01:42:03 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex09/ft_strcapitalize.c"

int		main(void)
{
	//char str01[35] = "This tRiNg asonly etTersTh sstRiNg";
	char str02[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	//char str03[35] = "2873640287408723428736402874087234";
	//char str04[35] = "onlylowerlettershereblablatestehah";
	//char str05[35] = "ONLYUPPERCASEHERETHISISONLYUPPERAS";
	//char str06[35] = {97,98,99,100,101,102,2,104,105,97,98,99,100,101,102,103,104,105,97,98,99,100,101,102,103,104,105,97,98,99,100,101,99,100};
	//char str07[35] = "";
	
	//char *res1 = ft_strcapitalize(str01);
	//char *res2 = ft_strcapitalize(str02);
	//char *res3 = ft_strcapitalize(str03);
	//char *res4 = ft_strcapitalize(str04);
	//char *res5 = ft_strcapitalize(str05);
	//char *res6 = ft_strcapitalize(str06);
	//char *res7 = ft_strcapitalize(str07);	
	printf("--------------------------------------EX09--------------------------------------\n");
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("-------------------------Capitalizar a string fornecida-------------------------\n\n");
	//printf("Original only letters:		%s: \n",res1);
	char *res2 = str02;
	printf("Antes:	%s \n",res2);	
	res2 =  ft_strcapitalize(str02);
	printf("Depois:	%s \n\n",res2);
	//printf("Original only numbers:		%s: \n",res3);
	//printf("Original only lowercase:	%s: \n",res4);
	//printf("Original only uppercase:	%s: \n",res5);
	//printf("Original array esquisita:	%s:	\n",res6);
	//printf("String em branco:	%s:						\n\n",res7);
	printf("--------------------------------------EX09--------------------------------------\n");
}
