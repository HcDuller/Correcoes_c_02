/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:11:01 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/09 03:47:10 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex08/ft_strlowcase.c"

int		main(void)
{
	char str01[35] = "ThisstRiNgHasonlyletTersThisstRiNg";
	char str02[35] = "This4iS4a4nuMBer4leTTer4mix4string";
	char str03[35] = "2873640287408723428736402874087234";
	char str04[35] = "onlylowerlettershereblablatestehah";
	char str05[35] = "ONLYUPPERCASEHERETHISISONLYUPPERAS";
	char str06[35] = {97,98,99,100,101,102,2,104,105,97,98,99,100,101,102,103,104,105,97,98,99,100,101,102,103,104,105,97,98,99,100,101,99,100};
	char str07[35] = "";
	
	char *res1 = ft_strlowcase(str01);
	char *res2 = ft_strlowcase(str02);
	char *res3 = ft_strlowcase(str03);
	char *res4 = ft_strlowcase(str04);
	char *res5 = ft_strlowcase(str05);
	char *res6 = ft_strlowcase(str06);
	char *res7 = ft_strlowcase(str07);
	
	printf("--------------------------------------EX08--------------------------------------\n");
	printf("-------------------------------------INICIO-------------------------------------\n");	
	printf("------Todas as letras minusculas devem ter sido convertidas em minusculas-------\n");
	printf("Original only letters:		%s: \n",res1);
	printf("Original letters and numbers:	%s: \n",res2);
	printf("Original only numbers:		%s: \n",res3);
	printf("Original only lowercase:	%s: \n",res4);
	printf("Original only uppercase:	%s: \n",res5);
	printf("Original array esquisita:	%s:	\n",res6);
	printf("String em branco:	%s:						\n",res7);
	printf("--------------------------------------EX08--------------------------------------\n");
}
