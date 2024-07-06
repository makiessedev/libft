#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	if (size && nmemb > (UINT32_MAX / size))
		return (NULL);
	buffer = (void *)malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, nmemb * size);
	return (buffer);
}
