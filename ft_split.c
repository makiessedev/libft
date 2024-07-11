#include "libft.h"
#include <stdio.h>

static int	ft_strings_num(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			counter++;
			i++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (counter + 1);

}

char	**ft_split(char const *s, char c)
{
	int 		i;
	int		j;
	int		k;
	int		count_chr;
	int		strs_num;
	char	**newstr;

	i = 0;
	j = 0;
	k = 0;
	count_chr = 0;
	strs_num = ft_strings_num(s, c);
	newstr = (char **)malloc(strs_num * sizeof(char *) + 2);
	if (!newstr)
		return (NULL);
	while (s[i] && strs_num > 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				count_chr++;
				i++;
			}
			i -= count_chr;
			newstr[j] = (char *)malloc(count_chr * sizeof(char) + 1);
			if (!newstr)
				return (NULL);
			while (count_chr > 0)
			{
				newstr[j][k] = s[i];
				i++;
				k++;
				count_chr--;
			}
			newstr[j][k] = '\0';
			strs_num--;
		}
		i++;
		j++;
		k = 0;
	}
	newstr[j] = '\0';
	return (newstr);
}
