#include "libft.h"

static int	*ft_newstr_len(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	return (ft_strlen(s) - counter);

}

char	**ft_split(char const *s, char c)
{
	int 		i;
	int		j;
	int		k;
	char	**newstr;

	i = 0;
	j = 0;
	k = 0;
	newstr = (char **)malloc(ft_newstr_len(s, c) * sizeof(char));
	while (s[i])
	{
		if (s[i] != c)
			newstr[j][k] = s[i];
		else
		{
			j++
			k = 0;
		}
		i++;
	}
	return (newstr);
}
