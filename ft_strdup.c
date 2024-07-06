#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*str;

	s_len = ft_strlen(s);
	str = (char *)malloc(s_len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, s_len);
	str[s_len] = '\0';
	return (str);
}
