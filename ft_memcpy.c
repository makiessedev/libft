#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp_dest;

	i = 0;
	temp_dest = (char *)dest;
	while (i < n)
	{
		temp_dest[i] = ((char *)src)[i];
		i++;
	}
	temp_dest[i] = '\0';
	return (temp_dest);
}
