#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle)
{
	int	needle_len;
	int	i;
	int	k;

	needle_len = ft_strlen(needle);	
	i = 0;
	k = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while(needle[k] && haystack[i] == needle[k])
			{
				needle_len--;
				i++;
				k++;
			}
			if(needle_len == 0)
			{
				needle_len = ft_strlen(needle);
				return ((char *)haystack + i - needle_len);
			}
			k = 0;
		}
		i++;
	}
	return (NULL);
}

int 	main(void)
{
	printf("%s", ft_strnstr("Makiesse Ambrósio Morais", "e"));

	return (0);
}
