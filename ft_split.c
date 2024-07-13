#include "libft.h"

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

static int	ft_word_size(const char *str, char c, int i)
{
	int	counter;

	counter = 0;
	while (str[i] != c && str[i])
	{
		counter++;
		i++;
	}
	return (counter);
}

static void	ft_free(char **strs, int i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);

}

char	**ft_split(char const *s, char c)
{
	int 		i;
	int		j;
	int		word_size;
	int		strs_num;
	char	**newstr;

	i = 0;
	j = 0;
	strs_num = ft_strings_num(s, c);
	newstr = (char **)malloc(strs_num * sizeof(char *) + 2);
	if (!newstr)
		return (NULL);
	while (s[i] && strs_num > 0)
	{
		while (s[i] == c)
			i++;	
		word_size = ft_word_size(s, c, i);
		newstr[j] = ft_substr(s, i, word_size);
		if (!newstr[j])
		{
			ft_free(newstr, j);
			return (NULL);
		}
		i += word_size;
		strs_num--;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
