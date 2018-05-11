/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 15:59:27 by ckrommen          #+#    #+#             */
/*   Updated: 2017/09/22 19:38:53 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char str1[7] = "string";
	char str2[7] = "string"; 
	char str3[7] = "string";
	char str4[7] = "string";
	char str5[50] = "thisstringiswaytoolongsoitshouldbreak";
	char str6[17];
	char str7[50] = "thisstringiswaytoolongsoitshouldbreak";
	char str8[17];
	char str9[64] = "stringisneat\0";
	char str10[32];
	char str11[64] = "stringisneat\0";
	char str12[32];
    char str13[10] = "stringly\0";
    char str14[6] ="swag\0";
    char str15[10] = "stringly\0";
    char str16[6] = "swag\0";
	char str17[16] = "qwertyuiopasdfg";
	char str18[16] = "qwertyuiopasdfg";
	char str19[7] = "strinG";
	char str20[7] = "string";
	char str21[7] = "strinG";
	char str22[7] = "string";
	char str23[9] = "str";
	char str24[5] = "stri";
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	char a[64] = "swagboimaster\0";
    char b[64];
    char aa[64] = "swagboimaster\0";
    char bb[64];

	printf("%s\n", (char *)ft_memset(str1, '.', 3));
	printf("%s\n", (char *)memset(str2, '.', 3));
	ft_bzero(str3, 3);
	bzero(str4, 3);
	printf("ft_bzero _%s_\n\n", str3);
	printf("bzer0 _%s_\n\n", str4);
	printf("memcpy %s.\n", (char *)memcpy(str6, str5, 22));
	printf("ft_memcpy %s.\n", (char *)ft_memcpy(str7, str8, 22));
	printf("memccpy .%s. %s\n", memccpy(str10, str9, 'a', 13), str10);
	printf("ft_memccpy .%s. %s\n", ft_memccpy(str12, str11, 'a', 13), str12);
	printf("ft_memmove %s\n", ft_memmove(str14, str13, 6));
	printf("memmove %s\n", memmove(str16, str15, 6));
	printf("memmove %s\n", memmove(bb, aa, 8));
	printf("ft_memmove %s %s\n", ft_memmove(b, a, 8));
	printf("memchr %s\n", memchr(str17, 103, 0));
	printf("ft_memchr %s\n", ft_memchr(str18, 103, 0));
	printf("memcmp %d\n", memcmp(str19, str20, 4));
	printf("ft_memcmp %d\n", ft_memcmp(str21, str22, 4));
	printf("strlcat %lu\n%s\n", strlcat(str22, str22, 5), str);
	printf("ft_strlcat %lu\n%s\n", ft_strlcat(str23, str23, 5), str);
	printf("strchr %s\n%s\n", strchr("hollo", '\0'), ft_strchr("hollo", '\0'));
	printf("strrchr %s\n%s\n", strrchr("hollo", 0), ft_strrchr("hollo", 0));
	printf("strstr %s\n%s\n", strstr("pumpkins are legit", "z"), ft_strstr("hello", "a"));
	printf("strstr %s\n", ft_strstr(largestring, smallstring));
	printf("strnstr %s\n%s\n", strnstr("pumpkin", "in", 7), ft_strnstr("pumpkin", "in", 7));
	printf("ft_strcmp %d\n strcmp%d\n", ft_strcmp("hello", "helloo"), strcmp("hello", "helloo"));
	printf("strncmp %d\n ft_strncmp %d\n", strncmp("thisisa", "thisisa", 8), ft_strncmp("thisisa", "thisisa", 8)
	printf("ft_atoi %d\n",ft_atoi("--21474"));
	printf("atoi %d\n", atoi("--21474"));
	printf("ft_isalpha %d\n", ft_isalpha(97));
	printf("ft_isdigit %d\n", ft_isdigit(97));
	printf("ft_isalnum %d\n", ft_isalnum('a'));
	printf("ft_isascii %d\n", ft_isascii(129));
	printf("ft_isprint %d\n", ft_isprint(127));
	printf("ft_toupper %d\n", ft_toupper('a'));
	printf("ft_tolower %d\n", ft_tolower('A'));
	return (0);
}
