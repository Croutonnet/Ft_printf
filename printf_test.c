
#include "ft_printf.h"
#include <stdlib.h>
/*
void	is_ok(int count, int pcount)
{
	char	*cbuff;
	char	*pcbuff;
	read(0, buff, count);
	if (count == pcount)
		printf("OK\n");
	else
		printf("FAIL\n");
}
*/

int	main(void)
{
	printf("-----%s-----\n", "%c");
	printf("-1-\n");
	printf("%c\n", 30);
	ft_printf("%c\n", 30);
	printf("-2-\n");
	printf("%c\n", '1');
	ft_printf("%c\n", '1');
	printf("-3-\n");
	printf("%c\n", 78);
	ft_printf("%c\n", 78);
	printf("-4-\n");
	printf("%c%c%c%c\n", 'a','l','l','o');
	ft_printf("%c%c%c%c\n", 'a','l','l','o');
	printf("-5-\n");
	printf("%c\n", -124);
	ft_printf("%c\n", -124);
	printf("-6-\n");
	printf("Does not compile\n");
	ft_printf("%c\n");
	printf("-7-\n");
	printf("%c\n", 'a');
	ft_printf("%c\n", 'a');
	printf("-----%s-----\n", "%s");
	printf("-1-\n");
	printf("%s\n", "");
	ft_printf("%s\n", "");
	printf("-2-\n");
	printf("%s\n", "a");
	ft_printf("%s\n", "a");
	printf("-3-\n");
	printf("%s\n", "Bonjour monde");
	ft_printf("%s\n", "Bonjour monde");
	printf("-4-\n");
	printf("%s%s%s%s\n", "a","l","l","o");
	ft_printf("%s%s%s%s\n", "a","l","l","o");
	printf("-5-\n");
	printf("%s %s %s %s\n", "Bonjour moi", "je suis toi,", "c'est pas vrai", "c'etait juste du troll");
	ft_printf("%s %s %s %s\n", "Bonjour moi", "je suis toi,", "c'est pas vrai", "c'etait juste du troll");
	printf("-6-\n");
	//printf("%s\n");
	ft_printf("%s\n");
	/*
	printf("-7-\n");
	printf("-----%s-----\n", "%s");
	printf("-1-\n");
	printf();
	ft_printf();
	printf("-2-\n");
	printf();
	ft_printf();
	printf("-3-\n");
	printf();
	ft_printf();
	printf("-4-\n");
	printf();
	ft_printf();
	printf("-5-\n");
	printf();
	ft_printf();
	printf("-6-\n");
	printf();
	ft_printf();
	printf("-7-\n");
	printf("-----%s-----\n", "%s");
	printf("-1-\n");
	printf();
	ft_printf();
	printf("-2-\n");
	printf();
	ft_printf();
	printf("-3-\n");
	printf();
	ft_printf();
	printf("-4-\n");
	printf();
	ft_printf();
	printf("-5-\n");
	printf();
	ft_printf();
	printf("-6-\n");
	printf();
	ft_printf();
	printf("-7-\n");
	printf("-----%s-----\n", "%s");
	printf("-1-\n");
	printf();
	ft_printf();
	printf("-2-\n");
	printf();
	ft_printf();
	printf("-3-\n");
	printf();
	ft_printf();
	printf("-4-\n");
	printf();
	ft_printf();
	printf("-5-\n");
	printf();
	ft_printf();
	printf("-6-\n");
	printf();
	ft_printf();
	printf("-7-\n");
	printf("-----%s-----\n", "%s");
	printf("-1-\n");
	printf();
	ft_printf();
	printf("-2-\n");
	printf();
	ft_printf();
	printf("-3-\n");
	printf();
	ft_printf();
	printf("-4-\n");
	printf();
	ft_printf();
	printf("-5-\n");
	printf();
	ft_printf();
	printf("-6-\n");
	printf();
	ft_printf();
	printf("-7-\n");
	*/
}
