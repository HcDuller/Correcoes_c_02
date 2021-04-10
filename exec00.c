/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:44:13 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/10 01:13:52 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcpy.c"

int		main(void)
{
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("--------------------------------------EX00--------------------------------------\n");
	
	char src1[6] = "01234";
	char src3[11] = "0123456789";
	char src2[6] = "01234";	
	char src4[11] = "0123456789";
	char dest1[11] = "0123456789";	
	char dest3[6] = "01234";
	char dest2[11] = "0123456789";
	char dest4[6] = "01234";
	char *pdest1;
	char *pdest2;
	char *pdest3;
	char *pdest4;
	//printf("-----------------------------------Originais------------------------------------\n\n");
	//printf("	STRCPY					|		FT_STRCPY \n");	
	//printf("dest(11)>src(6)		|	dest(6)<src(11)	|dest(11)>src(6)	|dest(6)<src(11)\n");	
	//printf("src:	%s		|src3:	%s	|src2:	%s		|src4:	%s\n", src1, src3, src2, src4);
	//printf("dest:	%s	|dest3:	%s		|dest2:	%s		|dest4:	%s\n", dest1, dest3, dest2, dest4);
	//printf("-------------------------------------1_exec--------------------------------------\n\n");
	pdest1 = strcpy(dest1,src1);
	//printf("	STRCPY					|		FT_STRCPY \n");	
	//printf("dest(11)>src(6)		|	dest(6)<src(11)	|dest(11)>src(6)	|dest(6)<src(11)\n");	
	//printf("src:	%s		|src3:	%s	|src2:	%s		|src4:	%s\n", src1, src3, src2, src4);
	//printf("dest:	%s		|dest3:	%s		|dest2:	%s	|dest4:	%s\n", dest1, dest3, dest2, dest4);
	//printf("-------------------------------------2_exec--------------------------------------\n\n");
	pdest3 = strcpy(dest3, src3);	
	//printf("	STRCPY					|		FT_STRCPY \n");	
	//printf("dest(11)>src(6)		|	dest(6)<src(11)	|dest(11)>src(6)	|dest(6)<src(11)\n");	
	//printf("src:	%s		|src3:	%s	|src2:	%s		|src4:	%s\n", src1, src3, src2, src4);
	//printf("dest:	%s		|dest3:	%s	|dest2:	%s	|dest4:	%s\n", dest1, dest3, dest2, dest4);
	//printf("-------------------------------------3_exec--------------------------------------\n\n");
	pdest2 = ft_strcpy(dest2, src2);	
	//printf("	STRCPY					|		FT_STRCPY \n");	
	//printf("dest(11)>src(6)		|	dest(6)<src(11)	|dest(11)>src(6)	|dest(6)<src(11)\n");	
	//printf("src:	%s		|src3:	%s	|src2:	%s		|src4:	%s\n", src1, src3, src2, src4);
	//printf("dest:	%s		|dest3:	%s	|dest2:	%s		|dest4:	%s\n", dest1, dest3, dest2, dest4);
	//printf("-------------------------------------4_exec--------------------------------------\n\n");
	pdest4 = ft_strcpy(dest4, src4);
	printf("	STRCPY					|		FT_STRCPY \n");	
	printf("dest(11)>src(6)		|	dest(6)<src(11)	|dest(11)>src(6)	|dest(6)<src(11)\n");	
	printf("src:	%s		|src3:	%s	|src2:	%s		|src4:	%s\n", src1, src3, src2, src4);
	printf("dest:	%s		|dest3:	%s	|dest2:	%s		|dest4:	%s\n\n", dest1, dest3, dest2, dest4);
	printf("--------------------------------------------------------------------------------\n");		
	printf("		Ambos dest e dest2 devem ter o valor 6789, \n");
	printf("		proveniente da sobrescricao feita quando dest < src\n");
	printf("--------------------------------------FIM---------------------------------------\n\n");		
	return (0);
}
