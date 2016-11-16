#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

#include	"ex00/ft_putstr.c"
void		test_ex00()
{
	ft_putstr("Looks like put string...\n is working!\n\7");
}

#include	"ex01/ft_putnbr.c"
void		test_ex01()
{

	ft_putstr("\nINT_MAX + 2: ");
   	ft_putnbr(2147483649);
	ft_putstr("\nINT_MIN: ");
   	ft_putnbr(-2147483648);
	ft_putstr("\n   ZER0: ");
   	ft_putnbr(0);
	ft_putchar('\n');
}

#include	"ex02/ft_atoi.c"
void		test_ex02()
{
	printf("ft_atoi: %d\n", ft_atoi("a+-2345"));
	printf("atoi: %d\n", atoi("a+-2345"));
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 is schoo for cool"));
	printf("atoi: %d\n", atoi("+42 is school for cool"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("          +42"));
	printf("atoi: %d\n", atoi("          +42"));
	printf("ft_atoi: %d\n", ft_atoi("+         42"));
	printf("atoi: %d\n", atoi("+         +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi("12345678901"));
	printf("atoi: %d\n", atoi("12345678901"));
	printf("ft_atoi: %d\n", ft_atoi("12345678901234567890"));
	printf("atoi: %d\n", atoi("12345678901234567890"));
	printf("ft_atoi: %d\n", ft_atoi("-00000000000000000000000000050"));
	printf("atoi: %d\n", atoi("-0000000000000000000000000000050"));
	printf("ft_atoi: %d\n", ft_atoi("0xFF"));
	printf("atoi: %d\n", atoi("0xFF"));
	printf("ft_atoi: %d\n", ft_atoi("-1234567890123456789"));
	printf("atoi: %d\n", atoi("-1234567890123456789"));
	printf("ft_atoi: %d\n", ft_atoi("12345678901234567890"));
	printf("atoi: %d\n", atoi("12345678901234567890"));
}

#include	"ex03/ft_strcpy.c"
void		test_ex03()
{
	char	test_dst[] = "Holding...0XXXXXXX";
	char	test_src[] = "Super job!";
	printf("Lib: %s\n", strcpy(test_dst,test_src));
	printf("You: %s\n", ft_strcpy(test_dst,test_src));
	if(test_dst[12] == 'X')
		printf(" Found X at src[9] as expected. Looks good!");
}

#include	"ex04/ft_strncpy.c"
void		test_ex04()
{
	char	test_dst[] = "Replace Me?XXXXXXXX!";
	char	test_src[] = "Sick Nasty!";
	test_dst[15] = '\0';
	//printf("strncpy: %s\n", strncpy(test_dst,test_src,10));
	printf("ft_strncpy: %s\n", ft_strncpy(test_dst,test_src,15));
	if(test_dst[13] == '\0')
		printf("Trailing memory for test_dst, looks correct!\n");
}

#include	"ex05/ft_strstr.c"
void		test_ex05()
{
	char	hidingspot[] = "don'tststop panicing";
	char	lookfor[] = "stop123456789234567890345678";
	printf("You: %s\n", ft_strstr(hidingspot,lookfor));
	printf("Lib: %s\n", strstr(hidingspot,lookfor));
}

#include	"ex06/ft_strcmp.c"
void		test_ex06()
{
	char	s1[] = "0123456789!1234556";
	char	s2[] = "holder";
	ft_putnbr(ft_strcmp(s1,s2));
}

#include	"ex07/ft_strncmp.c"
void		test_ex07()
{
}

#include	"ex08/ft_strupcase.c"
void		test_ex08()
{
}

#include	"ex09/ft_strlowcase.c"
void		test_ex09()
{
}

#include	"ex10/ft_strcapitalize.c"
void		test_ex10()
{
	char	testa[] = "a";//"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("TEST DATA:\n%s\n",testa);
	printf("YOUR DATA:\n%s\n",ft_strcapitalize(testa));
	char	testb[] = " \"42\" I am eaSily imprEssed by Big leTTers\\numbers: 0x\102FFF.";
	printf("TEST DATA:\n%s\n",testb);
	printf("YOUR DATA:\n%s\n",ft_strcapitalize(testb));
}

#include	"ex13/ft_str_is_lowercase.c"
void		test_ex13()
{
	printf("123415 : %d\n", ft_str_is_lowercase("123415"));
	printf("asdafz : %d\n", ft_str_is_lowercase("asdafz"));
	printf("ABCDEF : %d\n", ft_str_is_lowercase("ABCDEF"));
}

#include	"ex14/ft_str_is_uppercase.c"
void		test_ex14()
{
	printf("123415 : %d\n", ft_str_is_uppercase("123415"));
	printf("asdafz : %d\n", ft_str_is_uppercase("asdafz"));
	printf("ABCDEF : %d\n", ft_str_is_uppercase("ABCDEF"));
}

#include	"ex15/ft_str_is_printable.c"
void		test_ex15()
{
	printf("\\x7f : %d\n", ft_str_is_printable("\x7f"));
	printf("stuff\\n : %d\n", ft_str_is_printable("stuff\n"));
	printf("ABCDEF : %d\n", ft_str_is_printable("ABCDEF"));
}

#include	"ex16/ft_strcat.c"
void		test_ex16()
{
	char buff[100] = "Something";
	char *src = " Good!";

	printf("Something Good! : %s\n", ft_strcat(buff,src));
}


#include	"ex17/ft_strncat.c"
void		test_ex17()
{
	char buff[100] = "Something";
	char *src = " Good!";

	printf("Something Good! : %s\n", strncat(buff,src, 3));
	printf("Something Good! : %s\n", ft_strncat(buff,src, 3));
}

#include	"ex18/ft_strlcat.c"
void		test_ex18()
{
	char buff[100] = "Something";
	char *src = " Good!";
	char buff2[100] = "Something";
	char *src2 = " Good!";

	printf("Something Good : %lu\n", strlcat(buff,src, 14));
	printf("Something Good : %u\n", ft_strlcat(buff2,src2, 14));
}

int			main(void)
{
	//test_ex00();
	//test_ex01();
	test_ex02();
	//test_ex03();
	//test_ex04();
	//test_ex05();
	//test_ex06();
	//test_ex07();
	//test_ex08();
	//test_ex09();
	//test_ex10();
	//test_ex11();
	//test_ex12();
	//test_ex13();
	//test_ex14();
	//test_ex15();
	//test_ex16();
	//test_ex18();
}
