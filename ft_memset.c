#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*to_fill;
	size_t	i;

	to_fill = (char *)s;
	i = 0;
	while (i < n)
	{
		to_fill[i] = c;
		i++;
	}
	return (to_fill);
}
